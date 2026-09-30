/*
FUNCTION_NAME: FUN_05c9bc48
ENTRY_POINT: 05c9bc48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


undefined8
FUN_05c9bc48(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,int param_5,
            int param_6)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  if ((DAT_06bc314c & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Method_UnityEngine_Rendering_GPUInstanceDataBufferBuilder_AddComponent<Vector4>__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_GPUInstanceDataBufferUploader_PrepareParamWrite<Vector4>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_GPUInstanceDataBufferUploader_WriteInstanceDataJob<Vector4>__
                );
    DAT_06bc314c = 1;
  }
  if (param_6 == param_5) {
    uVar3 = param_6 - 1U | (int)(param_6 - 1U) >> 0x10;
    uVar3 = uVar3 | (int)uVar3 >> 8;
    uVar3 = uVar3 | (int)uVar3 >> 4;
    uVar3 = uVar3 | (int)uVar3 >> 2;
    uVar3 = uVar3 | (int)uVar3 >> 1;
    uVar1 = FUN_05c9be10(param_1,param_2,param_3,param_4,uVar3 + 1,uVar3 + 1,0xffffffff);
    return uVar1;
  }
  lVar2 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
  if (lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x18);
    if (uVar3 != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)
            Method_UnityEngine_Rendering_GPUInstanceDataBufferUploader_WriteInstanceDataJob<Vector4>__
      ;
      if (param_4 == (long *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
        uVar3 = (uint)*(undefined8 *)(lVar2 + 0x18);
      }
      if ((1 < uVar3) && (*(undefined8 *)(lVar2 + 0x28) = uVar1, uVar3 != 2)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_GPUInstanceDataBufferUploader_PrepareParamWrite<Vector4>__
        ;
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_05c9be0c;
        if ((3 < uVar3) &&
           (*(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58),
           uVar3 != 4)) {
          *(undefined8 *)(lVar2 + 0x40) =
               *(undefined8 *)
                Method_UnityEngine_Rendering_GPUInstanceDataBufferBuilder_AddComponent<Vector4>__;
          uVar1 = FUN_04f6fd20(lVar2,0);
          if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
          }
          UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar1,0);
          return 0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_05c9be0c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


