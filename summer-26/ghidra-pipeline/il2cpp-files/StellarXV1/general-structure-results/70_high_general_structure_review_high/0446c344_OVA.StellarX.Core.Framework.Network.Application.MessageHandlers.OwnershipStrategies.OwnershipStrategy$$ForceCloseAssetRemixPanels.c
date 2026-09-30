/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Network.Application.MessageHandlers.OwnershipStrategies.OwnershipStrategy$$ForceCloseAssetRemixPanels
ENTRY_POINT: 0446c344
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void OVA_StellarX_Core_Framework_Network_Application_MessageHandlers_OwnershipStrategies_OwnershipStrategy__ForceCloseAssetRemixPanels
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long unaff_x21;
  undefined8 uVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  
  puVar3 = PTR_DAT_092992f0;
  if ((*(byte *)(unaff_x21 + 0x32f) & 1) == 0) {
    FUN_04077588(PTR_DAT_092992f0);
    FUN_04077588(PTR_DAT_092992f8);
    FUN_04077588(PTR_DAT_09299300);
    FUN_04077588(PTR_DAT_09299308);
    FUN_04077588(PTR_DAT_09299310);
    FUN_04077588(PTR_DAT_09299318);
    FUN_04077588(PTR_DAT_09299320);
    FUN_04077588(PTR_DAT_09299328);
    *(undefined1 *)(unaff_x21 + 0x32f) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _iStack0000000000000030 = 0;
  lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_076bca34(lVar10,0);
  *(undefined1 *)(lVar10 + 0x10) = 0;
  plVar16 = (long *)(param_1 + 0x10);
  *plVar16 = lVar10;
  thunk_FUN_040ec700(plVar16,lVar10);
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar10 = FUN_0446a0f4(), puVar7 = PTR_DAT_09299320, puVar6 = PTR_DAT_09299310,
     puVar5 = PTR_DAT_09299308, puVar4 = PTR_DAT_09299300, puVar3 = PTR_DAT_092992f8, lVar10 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_05bcd750(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_09299328);
  puVar2 = PTR_DAT_09285980;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  _iStack0000000000000030 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  while( true ) {
    while( true ) {
      uVar11 = FUN_0712a3e4(&stack0x00000020,*(undefined8 *)puVar6);
      uVar9 = _iStack0000000000000030;
      if ((uVar11 & 1) == 0) {
        GLTFast_Jobs_CachedFunction_GetFloat3Int8Normalized_00000305_PostfixBurstDelegate__BeginInvoke
                  (&stack0x00000020,*(undefined8 *)puVar5);
        return;
      }
      iVar8 = iStack0000000000000030;
      if (iStack0000000000000030 != 3) break;
      FUN_0446c924(param_1);
    }
    uVar17 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar17 = FUN_0768890c(uVar17,0);
    in_stack_00000000._4_4_ = iVar8;
    uVar12 = thunk_FUN_040b4b34(*(undefined8 *)puVar4,(long)&stack0x00000000 + 4);
    if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar17 = FUN_076ad5d4(uVar17,uVar12,0);
    if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(0,uVar17);
    }
    uVar17 = FUN_0446b6cc();
    lVar10 = *(long *)(param_1 + 0x20);
    if (lVar10 == 0) break;
    lVar13 = *(long *)(lVar10 + 0x10);
    lVar15 = *(long *)puVar7;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
      *puVar14 = uVar17;
      thunk_FUN_040ec700(puVar14,uVar17);
    }
    else {
      FUN_05c26d88(lVar10,uVar17,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
    FUN_0446c61c(param_1,uVar17,uVar9 & 0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


