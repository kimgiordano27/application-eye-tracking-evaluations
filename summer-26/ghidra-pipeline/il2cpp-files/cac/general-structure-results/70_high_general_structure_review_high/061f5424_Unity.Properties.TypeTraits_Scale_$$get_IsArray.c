/*
FUNCTION_NAME: Unity.Properties.TypeTraits<Scale>$$get_IsArray
ENTRY_POINT: 061f5424
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeTraits<Scale>__get_IsArray(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0968a418 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09122ab8);
    DAT_0968a418 = 1;
  }
  puVar2 = PTR_DAT_09122ab8;
  if (param_2 == (long *)0x0) {
    thunk_FUN_03f786f8(PTR_DAT_0910e1d8);
    uVar6 = thunk_FUN_03f4e68c();
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09122800);
    FUN_0740f0b8(uVar6,uVar5,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 061f53f8 with catch @ 061f5470
                        */
      lVar3 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260();
      }
                    /* try { // try from 061f5488 to 062f549f has its CatchHandler @ 061f5524 */
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar3 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260();
      }
      lVar3 = FUN_061f5140(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8));
    }
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
      if (lVar3 == 0) goto LAB_061f55b0;
      uVar4 = FUN_0752e090(lVar3,param_2,0);
    }
    else {
      if (lVar3 == 0) {
LAB_061f55b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar4 = FUN_0752d72c(lVar3,param_2[0x12],param_2,0);
    }
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09125450);
    uVar5 = FUN_074f9220(uVar5,0);
    thunk_FUN_03f786f8(PTR_DAT_09111b70);
    uVar6 = thunk_FUN_03f4e68c();
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar6,uVar5,0)
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar6,param_3);
}


