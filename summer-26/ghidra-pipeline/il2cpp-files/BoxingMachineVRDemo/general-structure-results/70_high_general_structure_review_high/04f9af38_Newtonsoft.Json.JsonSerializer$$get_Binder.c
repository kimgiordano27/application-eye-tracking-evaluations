/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Binder
ENTRY_POINT: 04f9af38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_Binder(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint in_w8;
  long unaff_x19;
  undefined8 uVar10;
  long *unaff_x23;
  ulong uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = (ulong)(in_w8 & 0xffff | 0xdeaf0000);
  uStack0000000000000008 = param_2;
  thunk_FUN_02dd37b4();
  if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
    *(ulong *)(unaff_x19 + 0x5c0) = uStack0000000000000000;
    *(undefined8 *)(unaff_x19 + 0x5c8) = uStack0000000000000008;
    thunk_FUN_02dd37b4(unaff_x19 + 0x5c8,0);
    uStack0000000000000008 = *(undefined8 *)PTR_DAT_06777740;
    uStack0000000000000000 = 0xdeb0deb0;
    thunk_FUN_02dd37b4(&stack0x00000008);
    if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
      *(ulong *)(unaff_x19 + 0x5d0) = uStack0000000000000000;
      *(undefined8 *)(unaff_x19 + 0x5d8) = uStack0000000000000008;
      thunk_FUN_02dd37b4(unaff_x19 + 0x5d8,0);
      uStack0000000000000008 = *(undefined8 *)PTR_DAT_06778038;
      uStack0000000000000000 = 0xdeb1deb1;
      thunk_FUN_02dd37b4(&stack0x00000008);
      if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
        *(ulong *)(unaff_x19 + 0x5e0) = uStack0000000000000000;
        *(undefined8 *)(unaff_x19 + 0x5e8) = uStack0000000000000008;
        thunk_FUN_02dd37b4(unaff_x19 + 0x5e8,0);
        uStack0000000000000008 = *(undefined8 *)PTR_DAT_06777510;
        uStack0000000000000000 = 0xdeb2deb2;
        thunk_FUN_02dd37b4(&stack0x00000008);
        if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
          *(ulong *)(unaff_x19 + 0x5f0) = uStack0000000000000000;
          *(undefined8 *)(unaff_x19 + 0x5f8) = uStack0000000000000008;
          thunk_FUN_02dd37b4(unaff_x19 + 0x5f8,0);
          uStack0000000000000008 = *(undefined8 *)PTR_DAT_06777e78;
          uStack0000000000000000 = 0xdeb3deb3;
          thunk_FUN_02dd37b4(&stack0x00000008);
          if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
            *(ulong *)(unaff_x19 + 0x600) = uStack0000000000000000;
            *(undefined8 *)(unaff_x19 + 0x608) = uStack0000000000000008;
            thunk_FUN_02dd37b4(unaff_x19 + 0x608,0);
            uStack0000000000000008 = *(undefined8 *)PTR_DAT_067779a8;
            uStack0000000000000000 = 0x10104b0fde8;
            thunk_FUN_02dd37b4(&stack0x00000008);
            if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
              *(ulong *)(unaff_x19 + 0x610) = uStack0000000000000000;
              *(undefined8 *)(unaff_x19 + 0x618) = uStack0000000000000008;
              thunk_FUN_02dd37b4(unaff_x19 + 0x618,0);
              uStack0000000000000008 = *(undefined8 *)PTR_DAT_06777de0;
              uStack0000000000000000 = 0x30304b0fde9;
              thunk_FUN_02dd37b4(&stack0x00000008);
              if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
                *(ulong *)(unaff_x19 + 0x620) = uStack0000000000000000;
                *(undefined8 *)(unaff_x19 + 0x628) = uStack0000000000000008;
                thunk_FUN_02dd37b4(unaff_x19 + 0x628,0);
                uStack0000000000000000 = 0;
                uStack0000000000000008 = 0;
                thunk_FUN_02dd37b4(&stack0x00000008,0);
                puVar2 = PTR_DAT_06774a38;
                if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
                  *(ulong *)(unaff_x19 + 0x630) = uStack0000000000000000;
                  *(undefined8 *)(unaff_x19 + 0x638) = uStack0000000000000008;
                  thunk_FUN_02dd37b4(unaff_x19 + 0x638,0);
                  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
                  thunk_FUN_02dd37b4();
                  iVar6 = FUN_04f912a4();
                  *(int *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = iVar6 + -1;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  if (DAT_06b78a98 == '\0') {
                    FUN_02d6084c(PTR_DAT_06774a38);
                    DAT_06b78a98 = '\x01';
                  }
                  puVar5 = PTR_DAT_06777480;
                  puVar4 = PTR_DAT_06777478;
                  puVar3 = PTR_DAT_06777470;
                  puVar1 = PTR_DAT_06763578;
                  lVar7 = *(long *)puVar2;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar7 = *(long *)puVar2;
                  }
                  uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
                  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                  FUN_04887bd0(uVar8,uVar10,*(undefined8 *)puVar3);
                  puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
                  *puVar9 = uVar8;
                  thunk_FUN_02dd37b4(puVar9,uVar8);
                  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
                  FUN_047ca43c(uVar8,*(undefined8 *)puVar4);
                  puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                  *puVar9 = uVar8;
                  thunk_FUN_02dd37b4(puVar9,uVar8);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


