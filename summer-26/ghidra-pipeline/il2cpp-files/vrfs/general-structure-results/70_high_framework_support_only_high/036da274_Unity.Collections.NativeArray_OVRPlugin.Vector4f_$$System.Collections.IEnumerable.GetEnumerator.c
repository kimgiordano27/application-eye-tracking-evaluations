/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 036da274
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
                 (void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    thunk_FUN_016466fc();
    lVar6 = *unaff_x28;
    do {
      uVar7 = FUN_0371033c(unaff_x26,unaff_x25,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
      if ((uVar7 & 1) == 0) {
LAB_036da2f8:
        lVar6 = (**(code **)(*unaff_x19 + 0x238))();
        if (lVar6 == 0) goto LAB_036da3d8;
        FUN_036ef950(lVar6,unaff_x24,0);
      }
      else {
        lVar8 = *unaff_x28;
        lVar6 = unaff_x24[0xc];
        lVar1 = unaff_x24[0xd];
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar8 = *unaff_x28;
        }
        uVar7 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
        if ((uVar7 & 1) == 0) goto LAB_036da2f8;
        lVar6 = *unaff_x24;
        bVar2 = *(byte *)(*unaff_x29 + 300);
        if ((*(byte *)(lVar6 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x29))
        goto LAB_036da2f8;
        lVar6 = (**(code **)(lVar6 + 0x238))(unaff_x24,*(undefined8 *)(lVar6 + 0x240));
        if (lVar6 == 0) goto LAB_036da3d8;
        iVar3 = 0;
        while (iVar4 = FUN_03f054bc(lVar6,0), iVar3 < iVar4) {
          lVar6 = (**(code **)(*unaff_x19 + 0x238))();
          plVar5 = (long *)(**(code **)(*unaff_x24 + 0x238))
                                     (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x240));
          if ((plVar5 == (long *)0x0) ||
             (uVar9 = (**(code **)(*plVar5 + 0x308))(plVar5,iVar3,*(undefined8 *)(*plVar5 + 0x310)),
             lVar6 == 0)) goto LAB_036da3d8;
          FUN_036ef950(lVar6,uVar9,0);
          iVar3 = iVar3 + 1;
          lVar6 = (**(code **)(*unaff_x24 + 0x238))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x240));
          if (lVar6 == 0) goto LAB_036da3d8;
        }
      }
      do {
        unaff_w23 = unaff_w23 + 1;
        lVar6 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar6 == 0) goto LAB_036da3d8;
        iVar3 = FUN_03f054bc(lVar6,0);
        if (iVar3 <= unaff_w23) {
          if ((unaff_x22 & 1) == 0) {
            if ((unaff_x19 == (long *)0x0) ||
               (lVar6 = (**(code **)(*unaff_x19 + 0x238))(), lVar6 == 0)) goto LAB_036da3d8;
            iVar3 = FUN_03f054bc(lVar6,0);
            if (iVar3 == 0) {
              lVar8 = *unaff_x28;
              lVar6 = unaff_x19[10];
              lVar1 = unaff_x19[0xb];
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar8 = *unaff_x28;
              }
              uVar7 = FUN_037103cc(lVar6,lVar1,**(undefined8 **)(lVar8 + 0xb8),
                                   (*(undefined8 **)(lVar8 + 0xb8))[1],0);
              if ((uVar7 & 1) != 0) {
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
              if (lVar6 == 0) goto LAB_036da3d8;
              iVar3 = FUN_03f054bc(lVar6,0);
              if (iVar3 == 1) {
                lVar8 = *unaff_x28;
                lVar6 = unaff_x19[10];
                lVar1 = unaff_x19[0xb];
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar8 = *unaff_x28;
                }
                uVar7 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                                     *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
                if ((uVar7 & 1) != 0) {
                  lVar8 = *unaff_x28;
                  lVar6 = unaff_x19[0xc];
                  lVar1 = unaff_x19[0xd];
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar8 = *unaff_x28;
                  }
                  uVar7 = FUN_0371033c(lVar6,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                                       *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
                  if ((uVar7 & 1) != 0) {
                    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x238))();
                    if (plVar5 == (long *)0x0) goto LAB_036da3d8;
                    unaff_x19 = (long *)(**(code **)(*plVar5 + 0x308))
                                                  (plVar5,0,*(undefined8 *)(*plVar5 + 0x310));
                    if (unaff_x19 != (long *)0x0) {
                      bVar2 = *(byte *)(*unaff_x27 + 300);
                      if ((*(byte *)(*unaff_x19 + 300) < bVar2) ||
                         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *unaff_x27)) {
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
        plVar5 = (long *)(**(code **)(*unaff_x20 + 0x238))();
        if (plVar5 == (long *)0x0) goto LAB_036da3d8;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                   (plVar5,unaff_w23,*(undefined8 *)(*plVar5 + 0x310));
        if (plVar5 != (long *)0x0) {
          bVar2 = *(byte *)(*unaff_x27 + 300);
          if ((*(byte *)(*plVar5 + 300) < bVar2) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar5);
          }
        }
        unaff_x24 = (long *)FUN_036d4778();
        lVar6 = *unaff_x27;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar6);
          lVar6 = *unaff_x27;
        }
      } while (unaff_x24 == (long *)**(long **)(lVar6 + 0xb8));
      if (unaff_x24 == (long *)0x0) {
LAB_036da3d8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar6 = *unaff_x28;
      unaff_x26 = unaff_x24[10];
      unaff_x25 = unaff_x24[0xb];
    } while (*(int *)(lVar6 + 0xe0) != 0);
  } while( true );
}


