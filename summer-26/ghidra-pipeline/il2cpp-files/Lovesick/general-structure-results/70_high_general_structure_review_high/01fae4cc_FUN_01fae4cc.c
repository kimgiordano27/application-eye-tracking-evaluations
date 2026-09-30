/*
FUNCTION_NAME: FUN_01fae4cc
ENTRY_POINT: 01fae4cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01fae4cc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long local_48;
  
  if ((DAT_03780623 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_VolumeParameter<float>_op_Inequality__);
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ec070);
    thunk_FUN_00d48444(StringLiteral_13097);
    thunk_FUN_00d48444(System_Collections_Generic_IList<Exception>_TypeInfo);
    DAT_03780623 = 1;
  }
  puVar1 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  local_48 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_01e92264(param_1,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar3 != 0) && (FUN_01f75de4(lVar3,param_2,0), lVar2 != 0)) {
      uVar4 = FUN_0129eff4(lVar2,lVar3,&local_48,
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_VolumeParameter<float>_op_Inequality__);
      plVar7 = (long *)StringLiteral_13097;
      if ((uVar4 & 1) != 0) {
        if ((local_48 == 0) || (*(long *)(local_48 + 0x30) == 0))
        goto System_Net_Sockets_Socket__Dispose;
        uVar4 = FUN_01f7609c(*(long *)(local_48 + 0x30),0);
        plVar7 = (long *)System_Collections_Generic_IList<Exception>_TypeInfo;
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec070);
        if (lVar3 == 0) goto System_Net_Sockets_Socket__Dispose;
        FUN_01eb1940(lVar3,lVar2,param_2,param_4,param_5,param_6,0);
        if (param_3 == (long *)0x0) {
          uVar6 = thunk_FUN_00d48444(StringLiteral_11283);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar3,uVar6);
        }
        lVar2 = *param_3;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo) {
              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_01fae680;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(param_3,*(long *)
                                       System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo
                              ,1);
LAB_01fae680:
        (*(code *)*puVar5)(param_3,lVar3,0,puVar5[1]);
      }
      return;
    }
  }
System_Net_Sockets_Socket__Dispose:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


