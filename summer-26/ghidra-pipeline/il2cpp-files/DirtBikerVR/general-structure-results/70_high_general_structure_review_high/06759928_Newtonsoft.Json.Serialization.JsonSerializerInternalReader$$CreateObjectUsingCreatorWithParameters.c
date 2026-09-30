/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 06759928
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (void)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int iVar8;
  long lVar9;
  long lVar10;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_0848a5e0);
  *(undefined1 *)(unaff_x23 + 0xb2e) = 1;
  puVar2 = PTR_DAT_084a5b08;
  uVar5 = FUN_0675fca8();
  plVar7 = (long *)PTR_DAT_0848a5e0;
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar6 = *(long *)puVar2;
    }
    if ((unaff_x19 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_06759b34;
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0xbc)) {
LAB_06759b38:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    plVar7 = (long *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0xbc) * 8 + 0x20);
  }
  lVar6 = *plVar7;
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x10)) {
      iVar8 = 0;
      do {
        sVar3 = FUN_065c7d98(lVar6,iVar8,0);
        if (sVar3 == 0x2d) {
          if (unaff_x19 == 0) goto LAB_06759b34;
          lVar9 = *(long *)(unaff_x19 + 0x30);
          if (DAT_0897bb55 == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897bb55 = '\x01';
          }
          if (lVar9 == 0) goto LAB_06759b34;
          if (*(int *)(lVar9 + 0x10) == 1) {
            uVar1 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar1 < *(uint *)(unaff_x22 + 0x10)) {
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_065c7d98(lVar9,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar1 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
                goto LAB_06759b04;
              }
              goto LAB_06759b38;
            }
          }
                    /* try { // try from 06759aec to 06859af7 has its CatchHandler @ 06759c04 */
          FUN_065e5d60();
        }
        else if (sVar3 == 0x23) {
          if (unaff_x19 == 0) goto LAB_06759b34;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
                    /* try { // try from 067599fc to 06859aaf has its CatchHandler @ 067599fc
                       catch() { ... } // from try @ 067599fc with catch @ 067599fc
                       catch() { ... } // from try @ 06759ba0 with catch @ 067599fc
                       catch() { ... } // from try @ 06759bf4 with catch @ 067599fc
                       catch() { ... } // from try @ 06759c48 with catch @ 067599fc */
          FUN_067593a8();
        }
        else {
          if (DAT_0897af3c == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
                    /* try { // try from 06759ab0 to 06859acf has its CatchHandler @ 06759c10 */
            DAT_0897af3c = '\x01';
          }
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_06759b38;
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar3;
          }
          else {
            FUN_065e5c34();
          }
        }
LAB_06759b04:
        iVar8 = iVar8 + 1;
                    /* try { // try from 06759b10 to 06859b13 has its CatchHandler @ 06759bf4 */
      } while (iVar8 < *(int *)(lVar6 + 0x10));
    }
                    /* try { // try from 06759b14 to 06859b23 has its CatchHandler @ 06759bfc */
                    /* try { // try from 06759b24 to 06859b33 has its CatchHandler @ 06759bf8 */
    return;
  }
LAB_06759b34:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


