/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 05e29668
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint uVar3;
  uint unaff_w24;
  long unaff_x29;
  undefined1 auVar4 [16];
  
  if (unaff_w24 < 0x18) {
    *(undefined2 *)(unaff_x19 + (ulong)unaff_w24 * 2) = 0x2e;
    if (unaff_w24 + 1 < 0x18) {
      uVar1 = *(undefined4 *)(unaff_x20 + 4);
      *(undefined2 *)(unaff_x19 + (ulong)(unaff_w24 + 1) * 2) = 0x2e;
      *(undefined4 *)(unaff_x29 + -0x10) = uVar1;
      uVar2 = FUN_05e12af4(unaff_x29 + -0x10,0);
      uVar3 = unaff_w24 + 2;
      if ((uVar2 & 1) != 0) {
        if (0x15 < unaff_w24) goto LAB_05e297a4;
        uVar3 = unaff_w24 + 3;
        *(undefined2 *)(unaff_x19 + (ulong)(unaff_w24 + 2) * 2) = 0x5e;
      }
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x20 + 4);
      uVar1 = FUN_05e12ae8(unaff_x29 + -0x10,0);
      *(undefined4 *)(unaff_x29 + -0x14) = uVar1;
      if (uVar3 < 0x19) {
        if ((*(ushort *)(*(long *)(*unaff_x22 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_05e297d0(unaff_x29 + -0x14,unaff_x19 + (ulong)uVar3 * 2,0x18 - uVar3,unaff_x29 + -0xc,0,
                     0,0);
        if (*(int *)(unaff_x29 + -0xc) + uVar3 < 0x19) {
          if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_07a0add0 + 0x20) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          auVar4 = FUN_04e66548();
          FUN_05c9e0d8(0,auVar4._0_8_,auVar4._8_8_,0);
          if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
          goto LAB_05e297cc;
        }
      }
      if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -8)) {
        FUN_05e38d2c();
      }
      goto LAB_05e297cc;
    }
  }
LAB_05e297a4:
  if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_05e297cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


