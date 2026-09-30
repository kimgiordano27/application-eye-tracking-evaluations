/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.TransformFeatureValueProvider$$GetValue
ENTRY_POINT: 018d948c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018d9528) */

long Oculus_Interaction_PoseDetection_TransformFeatureValueProvider__GetValue
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  if (param_2 != 1) {
    if (unaff_x20 != (long *)0x0) {
      lVar10 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x018d9510;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
code_r0x018d9510:
      (*(code *)*puVar2)();
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar7;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar9 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_018d93a0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_018d93a0:
    (*(code *)*puVar2)();
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar10);
  }
  uVar3 = (**(code **)(*unaff_x19 + 0x298))();
  uVar4 = FUN_018d9540();
  puVar1 = StringLiteral_5186;
  if ((uVar4 & 1) != 0) {
    lVar9 = unaff_x19[4];
    uVar5 = FUN_01e3d1bc(*(undefined8 *)StringLiteral_10543,0);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar10 != 0) {
      FUN_01e351f8(lVar10,uVar5,uVar3,0);
      lVar6 = thunk_FUN_00d62348(*unaff_x24);
      if (lVar6 != 0) {
        FUN_017b46ec(lVar6,0);
        *(long *)(lVar6 + 0x10) = lVar10;
        if (lVar9 != 0) {
          FUN_01323a14(lVar9,0,lVar6,
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
          goto LAB_018d90f4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_018d90f4:
  return unaff_x19[4];
}


