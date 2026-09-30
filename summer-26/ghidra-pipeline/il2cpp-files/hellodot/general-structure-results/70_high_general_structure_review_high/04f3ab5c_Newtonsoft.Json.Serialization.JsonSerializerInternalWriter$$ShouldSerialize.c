/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 04f3ab5c
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *unaff_x19;
  int iVar8;
  ushort *puVar9;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar10;
  uint uVar11;
  undefined1 *unaff_x27;
  uint uVar12;
  int iStack000000000000001c;
  
  puVar3 = PTR_DAT_065f73a8;
  if (unaff_w24 < unaff_w23) {
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
    if (*(int *)(*(long *)PTR_DAT_065f73a8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar12 = (uint)uVar1;
    uVar11 = uVar12 - 0x30;
    if (uVar11 < 10) {
                    /* try { // try from 04f3ad08 to 0503ad17 has its CatchHandler @ 04f3ada4 */
      iStack000000000000001c = -1;
      if (uVar12 != 0x30) {
LAB_04f3ad40:
                    /* try { // try from 04f3ad40 to 0503ad4f has its CatchHandler @ 04f3adc0 */
        uVar12 = unaff_w24 + 1;
                    /* try { // try from 04f3ad50 to 0503ad63 has its CatchHandler @ 04f3adb0 */
        uVar10 = unaff_w24 + 9;
        iVar8 = -8;
        do {
          if (unaff_w23 <= uVar12) goto LAB_04f3afb4;
                    /* try { // try from 04f3ad68 to 0503ad9f has its CatchHandler @ 04f3adac */
          uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar8 + 9) * 2);
          uVar12 = (uint)uVar1;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (9 < uVar1 - 0x30) {
            bVar4 = false;
            uVar10 = unaff_w24 + iVar8 + 9;
            goto LAB_04f3aea8;
          }
          uVar12 = unaff_w24 + iVar8 + 10;
                    /* try { // try from 04f3ada0 to 0503ada3 has its CatchHandler @ 04f3ada8 */
          bVar4 = iVar8 != -1;
          iVar8 = iVar8 + 1;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ad08 with catch @ 04f3ada4
                       try { // try from 04f3ada4 to 0503addb has its CatchHandler @ 04f3abc4 */
          uVar2 = ((uint)uVar1 + uVar11 * 10) - 0x30;
          uVar11 = uVar2;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ada0 with catch @ 04f3ada8
                        */
        } while (bVar4);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ad68 with catch @ 04f3adac
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ad50 with catch @ 04f3adb0
                        */
        if (unaff_w23 <= uVar12) {
LAB_04f3afb4:
          uVar7 = 1;
          iStack000000000000001c = uVar11 * iStack000000000000001c;
          goto LAB_04f3af88;
        }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3accc with catch @ 04f3adb4
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04f3ac20 with catch @ 04f3adb8
                        */
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (9 < uVar1 - 0x30) goto LAB_04f3aea4;
        uVar11 = (uVar1 - 0x30) + uVar2 * 10;
        uVar10 = unaff_w24 + 10;
        iVar8 = 2 - iStack000000000000001c;
        if (-1 < 1 - iStack000000000000001c) {
          iVar8 = 1 - iStack000000000000001c;
        }
        bVar5 = (ulong)(uint)(iVar8 >> 1) + 0x7fffffff < (ulong)uVar11;
        bVar4 = 0xccccccc < (int)uVar2 || bVar5;
        if (uVar10 < unaff_w23) {
          do {
            uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            uVar12 = (uint)uVar1;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if (9 < uVar1 - 0x30) goto LAB_04f3aea8;
            uVar10 = uVar10 + 1;
            bVar4 = true;
          } while (unaff_w23 != uVar10);
        }
        else if (0xccccccc >= (int)uVar2 && !bVar5) goto LAB_04f3afb4;
LAB_04f3af6c:
        iStack000000000000001c = 0;
        uVar7 = 0;
        *unaff_x27 = 1;
        goto LAB_04f3af88;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if (unaff_w23 <= unaff_w24) {
          uVar11 = 0;
          goto LAB_04f3afb4;
        }
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar11 = uVar1 - 0x30;
      } while (uVar11 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 04f3ad34 to 0503ad3f has its CatchHandler @ 04f3adbc */
        thunk_FUN_02cd038c();
      }
      if (uVar11 < 10) goto LAB_04f3ad40;
      uVar10 = unaff_w24;
      uVar11 = 0;
LAB_04f3aea4:
      uVar12 = (uint)uVar1;
      bVar4 = false;
LAB_04f3aea8:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((uVar12 - 9 < 5) || (uVar12 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar10 = uVar10 + 1;
          if ((int)uVar10 < (int)unaff_w23) {
            puVar9 = (ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
            do {
              if (unaff_w23 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              uVar1 = *puVar9;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_04f3af24;
              uVar10 = uVar10 + 1;
              puVar9 = puVar9 + 1;
            } while (unaff_w23 != uVar10);
          }
          else {
LAB_04f3af24:
            if (uVar10 < unaff_w23) goto LAB_04f3af38;
          }
          goto LAB_04f3af64;
        }
      }
      else {
LAB_04f3af38:
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = FUN_04f3d628();
        if ((uVar6 & 1) != 0) {
LAB_04f3af64:
          if (!bVar4) goto LAB_04f3afb4;
          goto LAB_04f3af6c;
        }
      }
    }
  }
  iStack000000000000001c = 0;
  uVar7 = 0;
LAB_04f3af88:
  *unaff_x19 = iStack000000000000001c;
  return uVar7;
}


