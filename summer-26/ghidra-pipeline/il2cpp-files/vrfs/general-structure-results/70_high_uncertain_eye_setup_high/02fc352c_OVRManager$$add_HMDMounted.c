/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 02fc352c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_HMDMounted(ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint uVar7;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  int unaff_w25;
  int iVar8;
  
                    /* try { // try from 02fc3534 to 030c353b has its CatchHandler @ 02fc3c88 */
  uVar1 = *(uint *)(unaff_x24 + 0x18);
  uVar7 = *(int *)(unaff_x21 + (param_1 & 0xffffffff) * 4 + 0x20) - 1;
  if (uVar7 < uVar1) {
    iVar8 = 0;
    do {
      if (*(int *)(unaff_x24 + (long)(int)uVar7 * 0x38 + 0x20) == unaff_w25) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                    /* try { // try from 02fc3580 to 030c35a7 has its CatchHandler @ 02fc3c7c */
          lVar3 = FUN_015c2790(lVar3);
        }
        lVar4 = *unaff_x22;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02fc35d4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80();
                    /* try { // try from 02fc35c4 to 030c35cb has its CatchHandler @ 02fc3c38 */
LAB_02fc35d4:
                    /* try { // try from 02fc35e0 to 030c35eb has its CatchHandler @ 02fc3c3c */
        uVar5 = (*(code *)*puVar2)();
        if ((uVar5 & 1) != 0) {
          return uVar7;
        }
        uVar1 = *(uint *)(unaff_x24 + 0x18);
      }
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      uVar7 = *(uint *)(unaff_x24 + (long)(int)uVar7 * 0x38 + 0x24);
                    /* try { // try from 02fc3600 to 030c3623 has its CatchHandler @ 02fc3c68 */
      if ((int)uVar1 <= iVar8) {
        FUN_031dbf48(0);
      }
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      iVar8 = iVar8 + 1;
    } while (uVar7 < uVar1);
  }
  return uVar7;
}


