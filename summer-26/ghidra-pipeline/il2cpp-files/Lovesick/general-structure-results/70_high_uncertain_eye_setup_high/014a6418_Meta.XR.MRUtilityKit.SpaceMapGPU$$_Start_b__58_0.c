/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$<Start>b__58_0
ENTRY_POINT: 014a6418
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014a6564) */

void Meta_XR_MRUtilityKit_SpaceMapGPU__<Start>b__58_0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long in_x9;
  int *piVar8;
  long in_x10;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar9;
  long unaff_x23;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  ulong in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == unaff_x23) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar8 + 9) * 0x10 + 0x138);
      goto LAB_014a6458;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_00d59724();
LAB_014a6458:
  (*(code *)*puVar5)();
LAB_014a6198:
  do {
    lVar6 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014a61e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(unaff_x26,*unaff_x21,0);
LAB_014a61e4:
    uVar7 = (*(code *)*puVar5)(unaff_x26,puVar5[1]);
    if ((uVar7 & 1) != 0) {
      lVar6 = *unaff_x26;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_014a6248;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_00d59724(unaff_x26,
                            *(long *)
                             UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo,0);
LAB_014a6248:
      plVar3 = (long *)(*(code *)*puVar5)(unaff_x26,puVar5[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)System_IO_MonoIO_TypeInfo + 300);
      if ((*(byte *)(*plVar3 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_IO_MonoIO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar3);
      }
      lVar6 = FUN_0129210c();
      lVar4 = thunk_FUN_00d62348(*unaff_x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017b46ec(lVar4,0);
      *(long *)(lVar4 + 0x10) = unaff_x28;
      *(undefined8 *)(lVar4 + 0x18) = unaff_x22;
      *(long **)(lVar4 + 0x20) = plVar3;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00bc397c(lVar6,lVar4,*unaff_x27);
      goto LAB_014a6198;
    }
    if (unaff_x26 != (long *)0x0) {
      lVar6 = *unaff_x26;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_10310) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_014a64ec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(unaff_x26,*(long *)StringLiteral_10310,0);
LAB_014a64ec:
      (*(code *)*puVar5)(unaff_x26,puVar5[1]);
    }
    uVar7 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
    in_stack_00000040 = in_stack_00000040 + 1;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
      do {
        uVar7 = (ulong)*(uint *)(in_stack_00000038 + 0x18);
        in_stack_00000030 = in_stack_00000030 + 1;
        if ((long)(int)*(uint *)(in_stack_00000038 + 0x18) <= (long)in_stack_00000030) {
          do {
            puVar2 = 
            Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
            in_stack_00000020 = in_stack_00000020 + 1;
            if ((long)(int)*(uint *)(in_stack_00000028 + 0x18) <= (long)in_stack_00000020) {
              lVar6 = *(long *)
                       Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
              ;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar6 = *(long *)puVar2;
              }
              *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = unaff_x19;
              return;
            }
            if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar3 = *(long **)(in_stack_00000028 + in_stack_00000020 * 8 + 0x20);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            in_stack_00000038 =
                 (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
            if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          } while ((int)*(ulong *)(in_stack_00000038 + 0x18) < 1);
          in_stack_00000030 = 0;
          uVar7 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
        }
        if (uVar7 <= in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        unaff_x28 = *(long *)(in_stack_00000038 + in_stack_00000030 * 8 + 0x20);
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000048 = FUN_0178c5b0(unaff_x28,0);
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      } while ((int)*(ulong *)(in_stack_00000048 + 0x18) < 1);
      in_stack_00000040 = 0;
      uVar7 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
    }
    if (uVar7 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x22 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
    uVar9 = *(undefined8 *)Method_Meta_WitAi_VoiceService_set_UsePlatformIntegrations__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01780344(uVar9,0);
    plVar3 = (long *)FUN_016b2cb0(unaff_x22,uVar9,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014a6184;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar3,*(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__,0);
LAB_014a6184:
    unaff_x26 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
    if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  } while( true );
}


