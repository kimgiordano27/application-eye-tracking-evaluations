/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 036da328
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


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  int unaff_w23;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    lVar8 = (**(code **)(param_1 + 0x238))();
    if (lVar8 == 0) {
LAB_036da3d8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar3 = FUN_03f054bc(lVar8,0);
    if (iVar3 <= unaff_w23) {
      if ((unaff_x22 & 1) == 0) {
        if ((unaff_x19 == (long *)0x0) || (lVar8 = (**(code **)(*unaff_x19 + 0x238))(), lVar8 == 0))
        goto LAB_036da3d8;
        iVar3 = FUN_03f054bc(lVar8,0);
        if (iVar3 == 0) {
          lVar6 = *unaff_x28;
          lVar8 = unaff_x19[10];
          lVar1 = unaff_x19[0xb];
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar6 = *unaff_x28;
          }
          uVar7 = FUN_037103cc(lVar8,lVar1,**(undefined8 **)(lVar6 + 0xb8),
                               (*(undefined8 **)(lVar6 + 0xb8))[1],0);
          if ((uVar7 & 1) != 0) {
            FUN_01fbb444();
          }
          lVar8 = *unaff_x27;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar8 = *unaff_x27;
          }
          unaff_x19 = (long *)**(long **)(lVar8 + 0xb8);
        }
        else {
          lVar8 = (**(code **)(*unaff_x19 + 0x238))();
          if (lVar8 == 0) goto LAB_036da3d8;
          iVar3 = FUN_03f054bc(lVar8,0);
          if (iVar3 == 1) {
            lVar6 = *unaff_x28;
            lVar8 = unaff_x19[10];
            lVar1 = unaff_x19[0xb];
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar6 = *unaff_x28;
            }
            uVar7 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                                 *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
            if ((uVar7 & 1) != 0) {
              lVar6 = *unaff_x28;
              lVar8 = unaff_x19[0xc];
              lVar1 = unaff_x19[0xd];
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *unaff_x28;
              }
              uVar7 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                                   *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
              if ((uVar7 & 1) != 0) {
                plVar5 = (long *)(**(code **)(*unaff_x19 + 0x238))();
                if (plVar5 == (long *)0x0) goto LAB_036da3d8;
                unaff_x19 = (long *)(**(code **)(*plVar5 + 0x308))
                                              (plVar5,0,*(undefined8 *)(*plVar5 + 0x310));
                if (unaff_x19 != (long *)0x0) {
                  bVar2 = *(byte *)(*unaff_x27 + 300);
                  if ((*(byte *)(*unaff_x19 + 300) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27))
                  {
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
    plVar5 = (long *)FUN_036d4778();
    lVar8 = *unaff_x27;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar8);
      lVar8 = *unaff_x27;
    }
    if (plVar5 != (long *)**(long **)(lVar8 + 0xb8)) {
      if (plVar5 == (long *)0x0) goto LAB_036da3d8;
      lVar6 = *unaff_x28;
      lVar8 = plVar5[10];
      lVar1 = plVar5[0xb];
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *unaff_x28;
      }
      uVar7 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *unaff_x28;
        lVar8 = plVar5[0xc];
        lVar1 = plVar5[0xd];
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar6 = *unaff_x28;
        }
        uVar7 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
        if ((uVar7 & 1) != 0) {
          lVar8 = *plVar5;
          bVar2 = *(byte *)(*unaff_x29 + 300);
          if ((bVar2 <= *(byte *)(lVar8 + 300)) &&
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x29)) {
            lVar8 = (**(code **)(lVar8 + 0x238))(plVar5,*(undefined8 *)(lVar8 + 0x240));
            if (lVar8 != 0) {
              iVar3 = 0;
              while (iVar4 = FUN_03f054bc(lVar8,0), iVar3 < iVar4) {
                lVar8 = (**(code **)(*unaff_x19 + 0x238))();
                plVar9 = (long *)(**(code **)(*plVar5 + 0x238))
                                           (plVar5,*(undefined8 *)(*plVar5 + 0x240));
                if ((plVar9 == (long *)0x0) ||
                   (uVar10 = (**(code **)(*plVar9 + 0x308))
                                       (plVar9,iVar3,*(undefined8 *)(*plVar9 + 0x310)), lVar8 == 0))
                goto LAB_036da3d8;
                FUN_036ef950(lVar8,uVar10,0);
                iVar3 = iVar3 + 1;
                lVar8 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
                if (lVar8 == 0) goto LAB_036da3d8;
              }
              goto LAB_036da31c;
            }
            goto LAB_036da3d8;
          }
        }
      }
      lVar8 = (**(code **)(*unaff_x19 + 0x238))();
      if (lVar8 == 0) goto LAB_036da3d8;
      FUN_036ef950(lVar8,plVar5,0);
    }
LAB_036da31c:
    param_1 = *unaff_x20;
    unaff_w23 = unaff_w23 + 1;
  } while( true );
}


