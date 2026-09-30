/*
FUNCTION_NAME: MedleyGraveyardVines.<StartHealingCoroutine>d__20$$System.IDisposable.Dispose
ENTRY_POINT: 00f34b98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void MedleyGraveyardVines_<StartHealingCoroutine>d__20__System_IDisposable_Dispose
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar7;
  long unaff_x27;
  long *plVar8;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  
  puVar2 = MedleySpaceCombatEnemy_<ExplodeCoroutine>d__27_TypeInfo;
  puVar1 = System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo;
  plVar8 = *(long **)(unaff_x27 + 0xe30);
  uStack0000000000000010 = unaff_w21;
  uVar3 = FUN_0129aa60(param_2,&stack0x00000010,*param_1);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_00f34d34;
    uStack0000000000000010 = unaff_w21;
    FUN_012df150(*(long *)(unaff_x20 + 0x18),&stack0x00000010,*(undefined8 *)StringLiteral_7647);
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_00f34d34;
    FUN_01299bc0(*(long *)(unaff_x20 + 0x10),&stack0x0000001c,&stack0x00000010,
                 *(undefined8 *)Meta_Voice_NLayer_Decoder_BitReservoir_TypeInfo);
    lVar4 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_00f306fc(lVar4,0);
    if (lVar4 == 0) goto LAB_00f34d34;
    lVar4 = FUN_00f29ea8(lVar4,0);
    uVar7 = *(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x10);
    uVar5 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (FUN_00f2a528(lVar6,uVar5,0), lVar4 == 0)) goto LAB_00f34d34;
    FUN_01299e64(lVar4,uVar7,lVar6,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_00f34d34;
    uStack0000000000000010 = in_stack_00000008._4_4_;
    FUN_0129de0c(*(long *)(unaff_x20 + 0x10),&stack0x00000010,
                 *(undefined8 *)Meta_WitAi_Requests_VoiceServiceRequestOptions_QueryParam_TypeInfo);
  }
  if (*(int *)(*plVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar4 != 0) && (FUN_00f2a528(lVar4,uVar5,0), unaff_x19 != 0)) {
    FUN_01299e64();
    return;
  }
LAB_00f34d34:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


