/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 074dd7e0
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar7;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined1 auVar8 [16];
  undefined8 auStack_10 [2];
  
  if ((unaff_w22 < 3) || (unaff_w23 < unaff_w21)) {
                    /* WARNING: Subroutine does not return */
    FUN_07505afc(0);
  }
  if ((*(ushort *)(*(long *)(**(long **)(param_1 + 0xed0) + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  uVar5 = FUN_074de3bc(unaff_x20 + 6,unaff_w21,unaff_x29 + -0xc,0xffffffff,0x1000);
  uVar6 = 0;
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_074de130(*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x18),
                         unaff_w21 + 4);
    if ((uVar5 & 1) != 0) {
      uVar2 = *(uint *)(unaff_x29 + -0x18);
      uVar1 = unaff_w21 + 6;
      if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_07505afc(0);
      }
      lVar7 = *(long *)(unaff_x29 + -0x20);
      if ((*(ushort *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      iVar3 = FUN_074f3690(lVar7 + (long)(int)uVar1 * 2,uVar2 - uVar1,0x2c,*unaff_x26);
      if (0 < iVar3) {
        auVar8 = FUN_03f77420(unaff_x29 + -0x20,uVar1,iVar3,*(undefined8 *)PTR_DAT_08f9eed0);
        *(undefined8 *)(unaff_x29 + -0x10) = 0;
        *(undefined2 *)(unaff_x19 + 4) = 0;
        uVar5 = FUN_074de3bc(auVar8._0_8_,auVar8._8_8_,unaff_x29 + -0x10,0xffffffff,0x1000,
                             unaff_x29 + -0xc);
        uVar6 = 0;
        *(short *)(unaff_x19 + 4) = (short)*(undefined4 *)(unaff_x29 + -0xc);
        if ((uVar5 & 1) == 0) goto LAB_074ddae8;
        uVar5 = FUN_074de130(*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x18),
                             iVar3 + uVar1 + 1);
        if ((uVar5 & 1) != 0) {
          iVar3 = iVar3 + uVar1 + 3;
          auVar8 = FUN_03aabb80(unaff_x29 + -0x20,iVar3,*unaff_x25);
          iVar4 = FUN_074f3690(auVar8._0_8_,auVar8._8_8_,0x2c,*unaff_x26);
          if (0 < iVar4) {
            auVar8 = FUN_03f77420(unaff_x29 + -0x20,iVar3,iVar4,*(undefined8 *)PTR_DAT_08f9eed0);
            *(undefined8 *)(unaff_x29 + -0x10) = 0;
            *(undefined2 *)(unaff_x19 + 6) = 0;
            uVar5 = FUN_074de3bc(auVar8._0_8_,auVar8._8_8_,unaff_x29 + -0x10,0xffffffff,0x1000,
                                 unaff_x29 + -0xc);
            uVar6 = 0;
            *(short *)(unaff_x19 + 6) = (short)*(undefined4 *)(unaff_x29 + -0xc);
            if ((uVar5 & 1) == 0) goto LAB_074ddae8;
            iVar4 = iVar4 + 1;
            uVar1 = iVar4 + iVar3;
            if ((int)uVar1 < (int)*(uint *)(unaff_x29 + -0x18)) {
              if (*(uint *)(unaff_x29 + -0x18) <= uVar1) {
LAB_074ddbb8:
                if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04031894(uVar6);
                }
                goto LAB_074ddbcc;
              }
              if (*(short *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar1 * 2) == 0x7b) {
                lVar7 = 0;
                auStack_10[0] = 0;
                do {
                  uVar5 = FUN_074de130(*(undefined8 *)(unaff_x29 + -0x20),
                                       *(undefined8 *)(unaff_x29 + -0x18),iVar3 + iVar4 + 1);
                  if ((uVar5 & 1) == 0) goto LAB_074ddad8;
                  iVar3 = iVar3 + iVar4 + 3;
                  auVar8 = FUN_03aabb80(unaff_x29 + -0x20,iVar3,*unaff_x25);
                  if (lVar7 == 7) {
                    iVar4 = FUN_074f3690(auVar8._0_8_,auVar8._8_8_,0x7d,*unaff_x26);
                  }
                  else {
                    iVar4 = FUN_074f3690(auVar8._0_8_,auVar8._8_8_,0x2c,*unaff_x26);
                  }
                  if (iVar4 < 1) goto LAB_074ddad8;
                  auVar8 = FUN_03f77420(unaff_x29 + -0x20,iVar3,iVar4,
                                        *(undefined8 *)PTR_DAT_08f9eed0);
                  *(undefined4 *)(unaff_x29 + -0xc) = 0;
                  uVar6 = FUN_074de3bc(auVar8._0_8_,auVar8._8_8_,unaff_x29 + -0xc,0xffffffff,0x1000,
                                       unaff_x29 + -0x24);
                  if ((uVar6 & 1) == 0) goto LAB_074ddae4;
                  if (0xff < *(uint *)(unaff_x29 + -0x24)) goto LAB_074ddad8;
                  *(char *)((long)auStack_10 + lVar7) = (char)*(uint *)(unaff_x29 + -0x24);
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 8);
                uVar2 = *(uint *)(unaff_x29 + -0x18);
                uVar1 = iVar3 + iVar4 + 1;
                *(undefined8 *)(unaff_x19 + 8) = auStack_10[0];
                if ((int)uVar1 < (int)uVar2) {
                  if (uVar2 <= uVar1) goto LAB_074ddbb8;
                  if ((*(short *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar1 * 2) == 0x7d) &&
                     (iVar3 + iVar4 == uVar2 - 2)) {
                    uVar6 = 1;
                    goto LAB_074ddae8;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_074ddad8:
    FUN_074ddea8();
LAB_074ddae4:
    uVar6 = 0;
  }
LAB_074ddae8:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_074ddbcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


