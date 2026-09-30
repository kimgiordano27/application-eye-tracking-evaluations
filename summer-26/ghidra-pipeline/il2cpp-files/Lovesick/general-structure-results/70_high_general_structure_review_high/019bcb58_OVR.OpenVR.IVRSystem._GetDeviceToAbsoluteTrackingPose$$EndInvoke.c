/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 019bcb58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_MemoryExtensions_CopyTo<byte>__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_NavigationEventBase<NavigationSubmitEvent>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_9751);
    thunk_FUN_00d48444(StringLiteral_13795);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_Add__);
    *(undefined1 *)(unaff_x20 + 0x65d) = 1;
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    return;
  }
  lVar8 = *(long *)StringLiteral_13795;
  lVar3 = FUN_0268fd4c();
  puVar1 = PTR_DAT_033ea8a0;
  if (lVar3 != 0) {
    lVar3 = FUN_0268b6ac(lVar3,0);
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,6);
    puVar1 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_Add__;
    if (plVar4 != (long *)0x0) {
      if ((*(long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_Add__ != 0) &&
         (lVar5 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_Add__
                                     ,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_019bcd98:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      uVar7 = *(uint *)(plVar4 + 3);
      if (uVar7 != 0) {
        plVar4[4] = *(long *)puVar1;
        if (lVar8 != 0) {
          lVar5 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar5 == 0) goto LAB_019bcd98;
          uVar7 = *(uint *)(plVar4 + 3);
        }
        puVar1 = Method_UnityEngine_UIElements_NavigationEventBase<NavigationSubmitEvent>__ctor__;
        if (1 < uVar7) {
          plVar4[5] = lVar8;
          lVar8 = *(long *)puVar1;
          if (lVar8 != 0) {
            lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar8 == 0) goto LAB_019bcd98;
            uVar7 = *(uint *)(plVar4 + 3);
          }
          if (2 < uVar7) {
            plVar4[6] = *(long *)puVar1;
            if (lVar3 != 0) {
              lVar8 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
              if (lVar8 == 0) goto LAB_019bcd98;
              uVar7 = *(uint *)(plVar4 + 3);
            }
            puVar1 = StringLiteral_9751;
            if (3 < uVar7) {
              plVar4[7] = lVar3;
              lVar3 = *(long *)puVar1;
              if (lVar3 != 0) {
                lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar3 == 0) goto LAB_019bcd98;
                uVar7 = *(uint *)(plVar4 + 3);
              }
              puVar2 = Method_System_MemoryExtensions_CopyTo<byte>__;
              if (4 < uVar7) {
                plVar4[8] = *(long *)puVar1;
                lVar3 = *(long *)puVar2;
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar3 = *(long *)puVar2;
                }
                lVar3 = **(long **)(lVar3 + 0xb8);
                if ((lVar3 != 0) &&
                   (lVar8 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
                goto LAB_019bcd98;
                puVar1 = StringLiteral_302;
                if (5 < *(uint *)(plVar4 + 3)) {
                  plVar4[9] = lVar3;
                  uVar6 = FUN_01600844(plVar4,0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar1);
                  }
                  FUN_0266185c(uVar6);
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


