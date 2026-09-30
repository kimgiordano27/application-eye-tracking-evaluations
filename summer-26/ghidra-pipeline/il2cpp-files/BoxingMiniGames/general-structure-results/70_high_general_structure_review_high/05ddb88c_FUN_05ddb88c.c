/*
FUNCTION_NAME: FUN_05ddb88c
ENTRY_POINT: 05ddb88c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ddba58) */
/* WARNING: Removing unreachable block (ram,0x05ddbacc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_05ddb88c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined5 uStack_35;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_079fd0e8;
  local_50 = param_2;
  uStack_48 = param_3;
  local_28 = param_4;
  if ((DAT_07edea2b & 1) == 0) {
    FUN_03642964(PTR_DAT_079fd0e8);
    FUN_03642964(PTR_DAT_07a14110);
    FUN_03642964(PTR_DAT_07a13ad0);
    FUN_03642964(PTR_DAT_07a13a18);
    FUN_03642964(PTR_DAT_079f5558);
    DAT_07edea2b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_05e7b144(&local_28,0);
  uVar3 = local_28;
  puVar2 = PTR_DAT_07a13a18;
  if ((uVar5 & 1) == 0) {
    FUN_05dd9270(param_1);
    FUN_05dd93ac(param_1);
    lVar6 = FUN_05dd8f8c(param_1);
    if ((lVar6 == 0) || (lVar7 = FUN_05e7fecc(lVar6,0), lVar7 == 0)) {
LAB_05ddbac8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar5 = FUN_05e90178(lVar7,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        FUN_05dd9b80(param_1);
      }
      iVar4 = FUN_04d88460(&local_50,*(undefined8 *)PTR_DAT_07a14110);
      iVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x44);
      if (iVar4 < iVar1) {
        auVar8 = System_Span<RaycastHit>__Slice(&local_50,*(undefined8 *)PTR_DAT_07a13ad0);
        FUN_05ddaf68(param_1,auVar8._0_8_,auVar8._8_8_);
        if (iVar4 < iVar1) {
          if (lVar6 == 0) goto LAB_05ddbac8;
          FUN_05e8020c(lVar6,0);
        }
        local_40 = 0;
        uStack_36 = 0;
        uStack_35 = 0;
        goto LAB_05ddbaa4;
      }
    }
    uVar5 = FUN_05ddbb24(param_1,local_50,uStack_48,local_28,lVar7);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_079f5558 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = System_Array__IndexOfImpl<SerializedCommand>(uVar3,*(undefined8 *)puVar2);
  }
  local_40 = 0;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_35 = 0;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(0x26,0);
  }
  local_40 = uVar5;
  thunk_FUN_036b7ad0(&local_40,uVar5);
  uStack_36 = 1;
LAB_05ddbaa4:
  auVar8._8_2_ = 0;
  auVar8._0_8_ = local_40;
  auVar8[10] = uStack_36;
  auVar8._11_5_ = uStack_35;
  return auVar8;
}


