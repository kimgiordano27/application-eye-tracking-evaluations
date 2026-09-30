/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 07474da8
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint in_w8;
  long in_x9;
  undefined8 uVar9;
  ulong in_x10;
  undefined8 *in_x14;
  long *unaff_x19;
  undefined8 uVar10;
  
  uVar9 = **(undefined8 **)(in_x9 + 0xb98);
  *(ulong *)(param_1 + 0x550) = in_x10 & 0xffff00000000ffff | 0x10103b50000;
  *(undefined8 *)(param_1 + 0x558) = uVar9;
  if (0x54 < in_w8) {
    uVar9 = *(undefined8 *)PTR_DAT_08fa0008;
    *(undefined8 *)(param_1 + 0x560) = 0x30303a8d698;
    *(undefined8 *)(param_1 + 0x568) = uVar9;
    if (in_w8 != 0x55) {
      uVar9 = *(undefined8 *)PTR_DAT_08fa0570;
      *(undefined8 *)(param_1 + 0x570) = 0xdeaadeaa;
      *(undefined8 *)(param_1 + 0x578) = uVar9;
      if (0x56 < in_w8) {
        uVar9 = *(undefined8 *)PTR_DAT_08fa0018;
        *(undefined8 *)(param_1 + 0x580) = 0xdeabdeab;
        *(undefined8 *)(param_1 + 0x588) = uVar9;
        if (in_w8 != 0x57) {
          uVar9 = *(undefined8 *)PTR_DAT_08fa07a8;
          *(undefined8 *)(param_1 + 0x590) = 0xdeacdeac;
          *(undefined8 *)(param_1 + 0x598) = uVar9;
          if (0x58 < in_w8) {
            uVar9 = *(undefined8 *)PTR_DAT_08fa08d8;
            *(undefined8 *)(param_1 + 0x5a0) = 0xdeaddead;
            *(undefined8 *)(param_1 + 0x5a8) = uVar9;
            if (in_w8 != 0x59) {
              uVar9 = *(undefined8 *)PTR_DAT_08fa0318;
              *(undefined8 *)(param_1 + 0x5b0) = 0xdeaedeae;
              *(undefined8 *)(param_1 + 0x5b8) = uVar9;
              if (0x5a < in_w8) {
                uVar9 = *(undefined8 *)PTR_DAT_08fa0760;
                *(undefined8 *)(param_1 + 0x5c0) = 0xdeafdeaf;
                *(undefined8 *)(param_1 + 0x5c8) = uVar9;
                if (in_w8 != 0x5b) {
                  uVar9 = *(undefined8 *)PTR_DAT_08fa0218;
                  *(undefined8 *)(param_1 + 0x5d0) = 0xdeb0deb0;
                  *(undefined8 *)(param_1 + 0x5d8) = uVar9;
                  if (0x5c < in_w8) {
                    uVar9 = *(undefined8 *)PTR_DAT_08fa0b18;
                    *(undefined8 *)(param_1 + 0x5e0) = 0xdeb1deb1;
                    *(undefined8 *)(param_1 + 0x5e8) = uVar9;
                    if (in_w8 != 0x5d) {
                      uVar9 = *(undefined8 *)PTR_DAT_08f9ffe8;
                      *(undefined8 *)(param_1 + 0x5f0) = 0xdeb2deb2;
                      *(undefined8 *)(param_1 + 0x5f8) = uVar9;
                      if (0x5e < in_w8) {
                        uVar9 = *(undefined8 *)PTR_DAT_08fa0958;
                        *(undefined8 *)(param_1 + 0x600) = 0xdeb3deb3;
                        *(undefined8 *)(param_1 + 0x608) = uVar9;
                        if (in_w8 != 0x5f) {
                          *(undefined8 *)(param_1 + 0x618) = *in_x14;
                          *(undefined8 *)(param_1 + 0x610) = 0x10104b0fde8;
                          if (0x60 < in_w8) {
                            uVar9 = *(undefined8 *)PTR_DAT_08fa08c0;
                            *(undefined8 *)(param_1 + 0x620) = 0x30304b0fde9;
                            *(undefined8 *)(param_1 + 0x628) = uVar9;
                            if (in_w8 != 0x61) {
                              *(undefined8 *)(param_1 + 0x638) = 0;
                              *(undefined8 *)(param_1 + 0x630) = 0;
                              puVar3 = PTR_DAT_08f91288;
                              *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8) = param_1;
                              iVar7 = FUN_0746fb68();
                              iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
                              *(int *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) = iVar7 + -1;
                              if (iVar1 == 0) {
                                thunk_FUN_0408f364();
                              }
                              if (DAT_09545653 == '\0') {
                                FUN_0403162c(PTR_DAT_08f91288);
                                DAT_09545653 = '\x01';
                              }
                              puVar6 = PTR_DAT_08f9ff58;
                              puVar5 = PTR_DAT_08f9ff50;
                              puVar4 = PTR_DAT_08f9ff48;
                              puVar2 = PTR_DAT_08f74718;
                              lVar8 = *(long *)puVar3;
                              if (*(int *)(lVar8 + 0xe4) == 0) {
                                thunk_FUN_0408f364();
                                lVar8 = *(long *)puVar3;
                              }
                              uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
                              uVar9 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
                              FUN_06fda0a8(uVar9,uVar10,*(undefined8 *)puVar4);
                              uVar10 = *(undefined8 *)puVar6;
                              *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = uVar9;
                              uVar9 = thunk_FUN_0406deb8(uVar10);
                              FUN_06ef98b4(uVar9,*(undefined8 *)puVar5);
                              *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x20) = uVar9;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


