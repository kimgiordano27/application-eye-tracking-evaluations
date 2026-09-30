/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.DownloadClosed$$Create
ENTRY_POINT: 044867e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void OVA_StellarX_Core_Framework_Analytics_DownloadClosed__Create(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  if ((*(byte *)(unaff_x20 + 0x448) & 1) == 0) {
                    /* try { // try from 044867f4 to 045867fb has its CatchHandler @ 044868e8 */
    FUN_04077588(PTR_DAT_09289728);
                    /* try { // try from 04486800 to 04586807 has its CatchHandler @ 044868d4 */
    FUN_04077588(PTR_DAT_09289748);
    *(undefined1 *)(unaff_x20 + 0x448) = 1;
  }
                    /* try { // try from 0448680c to 04586817 has its CatchHandler @ 044868d0 */
  if (unaff_x19[0x12] == 0) goto LAB_04486904;
  if (*(char *)(unaff_x19[0x12] + 0x21) == '\0') {
    plVar5 = (long *)unaff_x19[0x18];
    if (plVar5 == (long *)0x0) goto LAB_04486904;
    lVar2 = *plVar5;
                    /* try { // try from 0448682c to 04586833 has its CatchHandler @ 044868c8 */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09289748) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto OVA_StellarX_Core_Framework_Analytics_DownloadDelete__set_SpaceID;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09289748,3);
OVA_StellarX_Core_Framework_Analytics_DownloadDelete__set_SpaceID:
    plVar5 = (long *)(*(code *)*puVar1)(plVar5,puVar1[1]);
    if (plVar5 == (long *)0x0) goto LAB_04486904;
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_09289728 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    thunk_FUN_040b5044();
    (**(code **)(*unaff_x19 + 0x998))();
  }
  FUN_089c6d28();
  *(undefined1 *)((long)unaff_x19 + 0x99) = 1;
  lVar2 = FUN_089c7604();
  if (lVar2 != 0) {
    FUN_089cabd0(lVar2,0,0);
    return;
  }
LAB_04486904:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


