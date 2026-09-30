/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
ENTRY_POINT: 074dd7ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_GetHashCode
               (void)

{
  uint uVar1;
  uint uVar2;
  bool in_CY;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar7;
  uint unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar8 [16];
  undefined8 auStack_10 [2];
  
  if ((!in_CY) || (unaff_w23 < unaff_w21)) {
                    /* WARNING: Subroutine does not return */
    FUN_07505afc(0);
  }
  if ((*(ushort *)(*(long *)(unaff_x27 + 0x20) + 0x135) & 1) == 0) {
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
                    /* try { // try from 074dd880 to 075dd8a7 has its CatchHandler @ 074dda2c */
      if ((*(ushort *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      iVar3 = FUN_074f3690(lVar7 + (long)(int)uVar1 * 2,uVar2 - uVar1,0x2c,*unaff_x26);
      if (0 < iVar3) {
        auVar8 = FUN_03f77420(unaff_x29 + -0x20,uVar1,iVar3,*(undefined8 *)PTR_DAT_08f9eed0);
        *(undefined8 *)(unaff_x29 + -0x10) = 0;
        *(undefined2 *)(unaff_x19 + 4) = 0;
                    /* try { // try from 074dd8e4 to 075dd92f has its CatchHandler @ 074dda34 */
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
                    /* try { // try from 074dd948 to 075dd953 has its CatchHandler @ 074dda24 */
                    /* try { // try from 074dd954 to 075dd9f3 has its CatchHandler @ 074dd620 */
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
                    /* try { // try from 074dd9f4 to 075dd9f7 has its CatchHandler @ 074dda28 */
                    /* try { // try from 074dd9f8 to 075dd9fb has its CatchHandler @ 074dda30 */
                    /* try { // try from 074dd9fc to 075dd9ff has its CatchHandler @ 074dda20 */
                  if (lVar7 == 7) {
                    /* try { // try from 074dda00 to 075dda03 has its CatchHandler @ 074dda30 */
                    /* try { // try from 074dda04 to 075dda0f has its CatchHandler @ 074dda1c */
                    iVar4 = FUN_074f3690(auVar8._0_8_,auVar8._8_8_,0x7d,*unaff_x26);
                    /* try { // try from 074dda10 to 075dda4f has its CatchHandler @ 074dd620 */
                  }
                  else {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dda04 with catch @ 074dda1c
                        */
                    iVar4 = FUN_074f3690(auVar8._0_8_,auVar8._8_8_,0x2c,*unaff_x26);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dd9fc with catch @ 074dda20
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dd948 with catch @ 074dda24
                        */
                  }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dd9f4 with catch @ 074dda28
                        */
                  if (iVar4 < 1) goto LAB_074ddad8;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dd880 with catch @ 074dda2c
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dd9f8 with catch @ 074dda30
                       catch(type#1 @ 08931438) { ... } // from try @ 074dda00 with catch @ 074dda30
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 074dd8e4 with catch @ 074dda34
                        */
                  auVar8 = FUN_03f77420(unaff_x29 + -0x20,iVar3,iVar4,
                                        *(undefined8 *)PTR_DAT_08f9eed0);
                    /* try { // try from 074dda50 to 075dda53 has its CatchHandler @ 074dda5c */
                    /* catch() { ... } // from try @ 074dda50 with catch @ 074dda5c */
                  *(undefined4 *)(unaff_x29 + -0xc) = 0;
                    /* try { // try from 074dda60 to 075dda67 has its CatchHandler @ 074dda70 */
                  uVar6 = FUN_074de3bc(auVar8._0_8_,auVar8._8_8_,unaff_x29 + -0xc,0xffffffff,0x1000,
                                       unaff_x29 + -0x24);
                  if ((uVar6 & 1) == 0) goto LAB_074ddae4;
                    /* try { // try from 074dda68 to 075dda73 has its CatchHandler @ 074dd620 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074dda60 with catch @ 074dda70
                        */
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


