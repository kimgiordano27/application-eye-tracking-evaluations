/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 0768363c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *unaff_x20;
  ushort *puVar8;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x25;
  long unaff_x26;
  int *unaff_x27;
  uint unaff_w28;
  uint uVar12;
  int iStack000000000000001c;
  
                    /* try { // try from 07683640 to 0778364f has its CatchHandler @ 07683650 */
                    /* try { // try from 07683658 to 07783663 has its CatchHandler @ 07683414 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07683654 with catch @ 07683660
                        */
                    /* try { // try from 07683664 to 0778370f has its CatchHandler @ 07683664
                       catch() { ... } // from try @ 07683664 with catch @ 07683664
                       catch() { ... } // from try @ 07683718 with catch @ 07683664
                       catch() { ... } // from try @ 0768375c with catch @ 07683664
                       catch() { ... } // from try @ 07683798 with catch @ 07683664 */
  uVar4 = FUN_07688554();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_074e5d94();
    if ((uVar4 & 1) == 0) {
      if (DAT_0988ae54 == '\0') {
        FUN_04077588(PTR_DAT_092b9c88);
        DAT_0988ae54 = '\x01';
      }
      if (unaff_x25 != 0) {
        FUN_074e3264();
      }
      uVar4 = FUN_07688554();
      if ((uVar4 & 1) != 0) {
        if (unaff_x25 == 0) goto LAB_07683a18;
        uVar9 = *(uint *)(unaff_x25 + 0x10);
        if (uVar9 < unaff_w23) {
                    /* try { // try from 07683710 to 07783717 has its CatchHandler @ 0768372c */
          iStack000000000000001c = -1;
          goto LAB_07683718;
        }
        goto LAB_076839b4;
      }
    }
    uVar9 = 0;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07683710 with catch @ 0768372c
                        */
    iStack000000000000001c = 1;
LAB_0768374c:
    puVar3 = PTR_DAT_092d6630;
                    /* try { // try from 07683758 to 0778375b has its CatchHandler @ 07683790 */
                    /* try { // try from 0768375c to 0778377f has its CatchHandler @ 07683664 */
    if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar12 = unaff_w28 - 0x30;
    if (uVar12 < 10) {
      if (unaff_w28 != 0x30) {
LAB_076837ac:
        uVar10 = uVar9 + 9;
        iVar7 = 0;
        do {
          uVar11 = uVar9 + 1 + iVar7;
          if (unaff_w23 <= uVar11) goto LAB_07683a04;
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar11 * 2);
          uVar11 = (uint)uVar2;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (9 < uVar2 - 0x30) {
            bVar1 = false;
            uVar10 = uVar9 + iVar7 + 1;
            goto LAB_076838f0;
          }
          iVar7 = iVar7 + 1;
          uVar12 = ((uint)uVar2 + uVar12 * 10) - 0x30;
        } while (iVar7 != 8);
        if (unaff_w23 <= uVar10) {
LAB_07683a04:
          uVar6 = 1;
          iStack000000000000001c = uVar12 * iStack000000000000001c;
          goto LAB_076839bc;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (9 < uVar2 - 0x30) goto LAB_076838ec;
        uVar10 = uVar9 + 10;
        uVar9 = ((uint)uVar2 + uVar12 * 10) - 0x30;
        bVar1 = (1U - iStack000000000000001c >> 1) + 0x7fffffff < uVar9 || 0xccccccc < (int)uVar12;
        uVar12 = uVar9;
        if (unaff_w23 <= uVar10) goto LAB_076839ec;
        lVar5 = *(long *)puVar3;
        do {
          uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
          uVar11 = (uint)uVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar5 = *(long *)puVar3;
          }
          if (9 < uVar2 - 0x30) goto LAB_076838f0;
          uVar10 = uVar10 + 1;
          bVar1 = true;
        } while (unaff_w23 != uVar10);
LAB_076839f0:
        iStack000000000000001c = 0;
        uVar6 = 0;
        *unaff_x20 = 1;
        goto LAB_076839bc;
      }
      do {
        uVar9 = uVar9 + 1;
                    /* try { // try from 07683780 to 0778378f has its CatchHandler @ 07683790 */
        if (unaff_w23 <= uVar9) {
          uVar12 = 0;
          goto LAB_07683a04;
        }
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      } while (uVar2 == 0x30);
                    /* catch() { ... } // from try @ 07683758 with catch @ 07683790
                       catch() { ... } // from try @ 07683780 with catch @ 07683790 */
                    /* try { // try from 07683794 to 07783797 has its CatchHandler @ 076837a0 */
                    /* try { // try from 07683798 to 077837a3 has its CatchHandler @ 07683664 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07683794 with catch @ 076837a0
                        */
      uVar12 = uVar2 - 0x30;
      if (uVar12 < 10) goto LAB_076837ac;
      uVar12 = 0;
      uVar10 = uVar9;
LAB_076838ec:
      uVar11 = (uint)uVar2;
      bVar1 = false;
LAB_076838f0:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if ((uVar11 - 9 < 5) || (uVar11 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar8 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar2 = *puVar8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_07683974;
              uVar10 = uVar10 + 1;
              puVar8 = puVar8 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_07683974:
            if (uVar10 < unaff_w23) goto LAB_07683988;
          }
          goto LAB_076839ec;
        }
      }
      else {
LAB_07683988:
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar4 = FUN_076860bc();
        if ((uVar4 & 1) != 0) {
LAB_076839ec:
          if (!bVar1) goto LAB_07683a04;
          goto LAB_076839f0;
        }
      }
    }
  }
  else {
    if (unaff_x26 == 0) {
LAB_07683a18:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar9 = *(uint *)(unaff_x26 + 0x10);
    if (uVar9 < unaff_w23) {
      iStack000000000000001c = 1;
LAB_07683718:
                    /* try { // try from 07683718 to 07783757 has its CatchHandler @ 07683664 */
      unaff_w28 = (uint)*(ushort *)(unaff_x21 + (long)(int)uVar9 * 2);
      goto LAB_0768374c;
    }
  }
LAB_076839b4:
  iStack000000000000001c = 0;
  uVar6 = 0;
LAB_076839bc:
  *unaff_x27 = iStack000000000000001c;
  return uVar6;
}


