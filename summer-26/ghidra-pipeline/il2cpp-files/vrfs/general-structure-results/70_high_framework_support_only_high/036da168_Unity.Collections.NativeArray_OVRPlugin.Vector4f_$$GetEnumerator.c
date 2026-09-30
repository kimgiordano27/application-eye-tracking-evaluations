/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 036da168
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  FUN_03fbbd88();
  FUN_03fbbec4();
  FUN_036dac4c();
  lVar6 = (**(code **)(*unaff_x20 + 0x238))();
  if (lVar6 != 0) {
    iVar5 = 0;
    do {
      iVar3 = FUN_03f054bc(lVar6,0);
      if (iVar3 <= iVar5) {
        if ((unaff_x22 & 1) == 0) {
          if ((unaff_x19 == (long *)0x0) ||
             (lVar6 = (**(code **)(*unaff_x19 + 0x238))(), lVar6 == 0)) break;
          iVar5 = FUN_03f054bc(lVar6,0);
          if (iVar5 == 0) {
            lVar8 = *unaff_x28;
            lVar6 = unaff_x19[10];
            lVar1 = unaff_x19[0xb];
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar8 = *unaff_x28;
            }
            uVar9 = FUN_037103cc(lVar6,lVar1,**(undefined8 **)(lVar8 + 0xb8),
                                 (*(undefined8 **)(lVar8 + 0xb8))[1],0);
            if ((uVar9 & 1) != 0) {
              FUN_01fbb444();
            }
            lVar6 = *unaff_x27;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar6 = *unaff_x27;
            }
            unaff_x19 = (long *)**(long **)(lVar6 + 0xb8);
          }
          else {
            lVar6 = (**(code **)(*unaff_x19 + 0x238))();
            if (lVar6 == 0) break;
            iVar5 = FUN_03f054bc(lVar6,0);
            if (iVar5 == 1) {
              lVar8 = *unaff_x28;
              lVar6 = unaff_x19[10];
              lVar1 = unaff_x19[0xb];
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar8 = *unaff_x28;
              }
              uVar9 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                                   *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
              if ((uVar9 & 1) != 0) {
                lVar8 = *unaff_x28;
                lVar6 = unaff_x19[0xc];
                lVar1 = unaff_x19[0xd];
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar8 = *unaff_x28;
                }
                uVar9 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                                     *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
                if ((uVar9 & 1) != 0) {
                  plVar7 = (long *)(**(code **)(*unaff_x19 + 0x238))();
                  if (plVar7 == (long *)0x0) break;
                  unaff_x19 = (long *)(**(code **)(*plVar7 + 0x308))
                                                (plVar7,0,*(undefined8 *)(*plVar7 + 0x310));
                  if (unaff_x19 != (long *)0x0) {
                    bVar2 = *(byte *)(*unaff_x27 + 300);
                    if ((*(byte *)(*unaff_x19 + 300) < bVar2) ||
                       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27
                       )) {
                    /* WARNING: Subroutine does not return */
                      FUN_0160f170(unaff_x19);
                    }
                  }
                }
              }
            }
          }
        }
        return unaff_x19;
      }
      plVar7 = (long *)(**(code **)(*unaff_x20 + 0x238))();
      if (plVar7 == (long *)0x0) break;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,iVar5,*(undefined8 *)(*plVar7 + 0x310))
      ;
      if (plVar7 != (long *)0x0) {
        bVar2 = *(byte *)(*unaff_x27 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar2) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar7);
        }
      }
      plVar7 = (long *)FUN_036d4778();
      lVar6 = *unaff_x27;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar6);
        lVar6 = *unaff_x27;
      }
      if (plVar7 != (long *)**(long **)(lVar6 + 0xb8)) {
        if (plVar7 == (long *)0x0) break;
        lVar8 = *unaff_x28;
        lVar6 = plVar7[10];
        lVar1 = plVar7[0xb];
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar8 = *unaff_x28;
        }
        uVar9 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
        if ((uVar9 & 1) != 0) {
          lVar8 = *unaff_x28;
          lVar6 = plVar7[0xc];
          lVar1 = plVar7[0xd];
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar8 = *unaff_x28;
          }
          uVar9 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                               *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
          if ((uVar9 & 1) != 0) {
            lVar6 = *plVar7;
            bVar2 = *(byte *)(*unaff_x29 + 300);
            if ((bVar2 <= *(byte *)(lVar6 + 300)) &&
               (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x29)) {
              lVar6 = (**(code **)(lVar6 + 0x238))(plVar7,*(undefined8 *)(lVar6 + 0x240));
              if (lVar6 != 0) {
                iVar3 = 0;
                while (iVar4 = FUN_03f054bc(lVar6,0), iVar3 < iVar4) {
                  lVar6 = (**(code **)(*unaff_x19 + 0x238))();
                  plVar10 = (long *)(**(code **)(*plVar7 + 0x238))
                                              (plVar7,*(undefined8 *)(*plVar7 + 0x240));
                  if ((plVar10 == (long *)0x0) ||
                     (uVar11 = (**(code **)(*plVar10 + 0x308))
                                         (plVar10,iVar3,*(undefined8 *)(*plVar10 + 0x310)),
                     lVar6 == 0)) goto LAB_036da3d8;
                  FUN_036ef950(lVar6,uVar11,0);
                  iVar3 = iVar3 + 1;
                  lVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
                  if (lVar6 == 0) goto LAB_036da3d8;
                }
                goto LAB_036da31c;
              }
              break;
            }
          }
        }
        lVar6 = (**(code **)(*unaff_x19 + 0x238))();
        if (lVar6 == 0) break;
        FUN_036ef950(lVar6,plVar7,0);
      }
LAB_036da31c:
      iVar5 = iVar5 + 1;
      lVar6 = (**(code **)(*unaff_x20 + 0x238))();
    } while (lVar6 != 0);
  }
LAB_036da3d8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


