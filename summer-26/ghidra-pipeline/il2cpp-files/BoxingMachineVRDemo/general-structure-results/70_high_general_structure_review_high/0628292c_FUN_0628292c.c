/*
FUNCTION_NAME: FUN_0628292c
ENTRY_POINT: 0628292c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0628292c(long *param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined4 uVar10;
  
  if ((DAT_06b8b9d8 & 1) == 0) {
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector2>__
                );
    FUN_02d6084c(Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                );
    FUN_02d6084c(PTR_DAT_0676a938);
    DAT_06b8b9d8 = 1;
  }
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector2>__;
  puVar2 = Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__;
  if (param_3 == (long *)0x0) {
LAB_062829ec:
    plVar5 = (long *)thunk_FUN_02d9d438(param_3,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) {
UnityEngine_XR_XRNodeState__get_nodeType:
      uVar10 = 0;
    }
    else {
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06282a4c;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar3,0);
LAB_06282a4c:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar4 & 1) == 0) goto UnityEngine_XR_XRNodeState__get_nodeType;
      uVar10 = 1;
    }
    if (param_3 != (long *)0x0) goto UnityEngine_XR_XRNodeState__TryGetPosition;
LAB_06282ad0:
    plVar5 = (long *)thunk_FUN_02d9d438(param_3,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) {
LAB_06282b4c:
      uVar8 = 0;
    }
    else {
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06282b34;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar3,1);
LAB_06282b34:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar4 & 1) == 0) goto LAB_06282b4c;
      uVar8 = 1;
    }
    uVar4 = FUN_06281dd0(param_1,param_2,uVar10,uVar8);
    if ((uVar4 & 1) == 0) goto LAB_06282b74;
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__ + 0x130);
    if (((*(byte *)(*param_3 + 0x130) < bVar1) ||
        (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
         *(long *)Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__)) ||
       (uVar4 = FUN_039136b0(param_3,*(undefined8 *)PTR_DAT_0676a938), (uVar4 & 1) == 0))
    goto LAB_062829ec;
    uVar10 = 1;
UnityEngine_XR_XRNodeState__TryGetPosition:
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if (((*(byte *)(*param_3 + 0x130) < bVar1) ||
        (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) ||
       (uVar4 = FUN_039136d4(param_3,*(undefined8 *)
                                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                            ), (uVar4 & 1) == 0)) goto LAB_06282ad0;
    uVar4 = FUN_06281dd0(param_1,param_2,uVar10,1);
    if ((uVar4 & 1) == 0) goto LAB_06282b74;
  }
  FUN_062e82ac(param_3,0);
LAB_06282b74:
  lVar7 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if (lVar7 != 0) {
    FUN_062f8528(lVar7,param_3,0);
    return;
  }
  return;
}


