/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardVersions400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 0342f994
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Leaderboards_Internal_Models_GetLeaderboardVersions400OneOf__DeserializeIntoActualObject
               (long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  ulong in_stack_00000008;
  
  if ((DAT_0412d641 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_01ab69ac(Unity_Properties_Internal_PropertyBagStore_TypeInfo);
    FUN_01ab69ac(UnityApplicationInsights_PageViewEnvelope_TypeInfo);
    DAT_0412d641 = 1;
  }
  puVar4 = Unity_Properties_Internal_PropertyBagStore_TypeInfo;
  in_stack_00000008 = 0;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (param_2 == 0) goto LAB_0342fc48;
    FUN_036f07b8(param_2,*(undefined4 *)
                          (*(long *)(*(long *)Unity_Properties_Internal_PropertyBagStore_TypeInfo +
                                    0xb8) + 4),*(undefined8 *)(param_1 + 0x130),0);
    FUN_036f080c(param_2,**(undefined4 **)(*(long *)puVar4 + 0xb8),*(undefined8 *)(param_1 + 0x138),
                 0);
  }
  else {
    lVar5 = FUN_03407248(0);
    if (((*(long *)(param_1 + 0x130) == 0) || (lVar5 == 0)) ||
       (lVar5 = FUN_034073e8(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x130) + 0x18),0),
       puVar3 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo, lVar5 == 0))
    goto LAB_0342fc48;
    FUN_036d624c(lVar5,*(undefined8 *)(param_1 + 0x130),0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (param_2 == 0) goto LAB_0342fc48;
    FUN_036f2da0(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14),lVar5,0);
    lVar5 = FUN_03407248(0);
    if (((*(long *)(param_1 + 0x138) == 0) || (lVar5 == 0)) ||
       (lVar5 = FUN_03407444(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x138) + 0x18),0), lVar5 == 0
       )) goto LAB_0342fc48;
    FUN_036d624c(lVar5,*(undefined8 *)(param_1 + 0x138),0);
    FUN_036f2da0(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),lVar5,0);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x100);
  uVar7 = *(undefined4 *)(param_1 + 0x104);
  if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03408854(uVar6,uVar7,(long)&stack0x00000008 + 4,&stack0x00000008,0);
  FUN_036f0318(in_stack_00000008._4_4_,in_stack_00000008 & 0xffffffff,0,0,param_2,
               *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
  if ((param_3 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0xe8);
    if (lVar5 == 0) {
LAB_0342fc48:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = *(int *)(lVar5 + 0xac);
    iVar2 = *(int *)(lVar5 + 0xb0);
    if (DAT_0411f1e5 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbeb70);
      DAT_0411f1e5 = '\x01';
    }
    fVar8 = *(float *)(*(long *)(*(long *)PTR_DAT_03cbeb70 + 0xb8) + 8) / (float)iVar1;
    fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_03cbeb70 + 0xb8) + 0xc) / (float)iVar2;
    FUN_036f0318(-(fVar8 * 0.5),-(fVar9 * 0.5),fVar8 * 0.5,-(fVar9 * 0.5),param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
    FUN_036f0318(-(fVar8 * 0.5),fVar9 * 0.5,fVar8 * 0.5,fVar9 * 0.5,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc),0);
    FUN_036f0318(fVar8,fVar9,(float)iVar1,(float)iVar2,param_2,
                 *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14),0);
  }
  return;
}


