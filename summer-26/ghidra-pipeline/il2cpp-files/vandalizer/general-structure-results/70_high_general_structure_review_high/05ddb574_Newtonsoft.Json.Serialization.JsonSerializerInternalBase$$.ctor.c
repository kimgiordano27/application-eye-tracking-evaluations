/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 05ddb574
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(void)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  uint uVar10;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x19 + 0x3c5) = 1;
  puVar5 = PTR_DAT_075ebb28;
  if (unaff_x22 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar7 = thunk_FUN_0322f148();
    uVar8 = thunk_FUN_03257e30(PTR_DAT_075ebb30);
    FUN_05d6f364(uVar7,uVar8,0);
  }
  else {
    if (unaff_w21 < 0) {
      thunk_FUN_03257e30(PTR_DAT_0759e028);
      uVar7 = thunk_FUN_0322f148();
      puVar5 = PTR_DAT_0759c148;
    }
    else {
      if (-1 < unaff_w20) {
        if (unaff_w21 <= *(int *)(unaff_x22 + 0x18) - unaff_w20) {
          lVar3 = *(long *)PTR_DAT_075ebb28;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar3 = *(long *)puVar5;
          }
          if (unaff_w20 < 1) {
            unaff_w20 = 0;
          }
          else {
            uVar2 = *(ushort *)(*(long *)(lVar3 + 0xb8) + 8);
            iVar9 = 0;
            do {
              uVar4 = FUN_05dbceec();
              if ((int)(uint)uVar4 < 0) {
                return iVar9;
              }
              iVar1 = iVar9 + 1;
              if (*(uint *)(unaff_x22 + 0x18) <= (uint)(unaff_w21 + iVar9)) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              *(short *)(unaff_x22 + (long)(unaff_w21 + iVar9) * 2 + 0x20) = (short)uVar4;
              uVar10 = (uint)uVar2;
              if (uVar10 == 0) {
                uVar4 = FUN_05ddb7c8(uVar4,uVar4 & 0xffffffff);
                if ((uVar4 & 1) != 0) {
                  return iVar1;
                }
              }
              else if (uVar10 == ((uint)uVar4 & 0xffff)) {
                return iVar9 + 1;
              }
              iVar9 = iVar1;
            } while (unaff_w20 != iVar1);
          }
          return unaff_w20;
        }
        thunk_FUN_03257e30(PTR_DAT_0759c0b8);
        uVar7 = thunk_FUN_0322f148();
        uVar8 = thunk_FUN_03257e30(PTR_DAT_075ebb38);
        FUN_05d75da4(uVar7,uVar8,0);
        goto LAB_05ddb728;
      }
      thunk_FUN_03257e30(PTR_DAT_0759e028);
      uVar7 = thunk_FUN_0322f148();
      puVar5 = PTR_DAT_0759e038;
    }
    uVar8 = thunk_FUN_03257e30(puVar5);
    uVar6 = thunk_FUN_03257e30(PTR_DAT_075e2d50);
    FUN_05d72b58(uVar7,uVar8,uVar6,0);
  }
LAB_05ddb728:
  uVar8 = thunk_FUN_03257e30(PTR_DAT_075ebb40);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar7,uVar8);
}


