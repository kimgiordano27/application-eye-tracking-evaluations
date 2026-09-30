/*
FUNCTION_NAME: Unity.Services.Lobbies.Models.TokenRequest$$.ctor
ENTRY_POINT: 05f9a648
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Lobbies_Models_TokenRequest___ctor(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  long in_stack_00000008;
  
  puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>__ctor__;
  if ((DAT_06dc45d3 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>__ctor__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>_Init__);
    FUN_02d965b8(Method_UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>__ctor__);
    FUN_02d965b8(PTR_DAT_069fbff8);
    DAT_06dc45d3 = 1;
  }
  lVar2 = *(long *)puVar1;
  in_stack_00000008 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = FUN_04e95158(**(long **)(lVar2 + 0xb8),param_1,&stack0x00000008,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>_Init__);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((in_stack_00000008 != 0) && (*(long *)(in_stack_00000008 + 0x10) != 0)) {
      if (*(int *)(*(long *)(in_stack_00000008 + 0x10) + 0x20) == 0) {
        return 0;
      }
      plVar6 = *(long **)(in_stack_00000008 + 0x18);
      if (plVar6 != (long *)0x0) {
        lVar2 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff8) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_05f9a758;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff8,2);
LAB_05f9a758:
        (*(code *)*puVar4)(plVar6,puVar4[1]);
        if (in_stack_00000008 != 0) {
          return *(undefined8 *)(in_stack_00000008 + 0x18);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


