/*
FUNCTION_NAME: OVRPlugin.Vector3f$$ToString
ENTRY_POINT: 01f8e2ac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector3f__ToString(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *plVar8;
  
  if (*unaff_x21 != 0) {
    plVar8 = (long *)unaff_x21[2];
    uVar2 = FUN_01f7feac(*unaff_x21,unaff_w20);
                    /* try { // try from 01f8e2d4 to 0208e2ff has its CatchHandler @ 01f8e480 */
    if ((*unaff_x21 != 0) && (uVar3 = FUN_01f7feac(*unaff_x21,unaff_w19), plVar8 != (long *)0x0)) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_027b5ad8) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01f8e334;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0122ea3c(plVar8,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f8e334:
      iVar1 = (*(code *)*puVar4)(plVar8,uVar2,uVar3,puVar4[1]);
      if (iVar1 < 1) {
        return;
      }
      if (*unaff_x21 != 0) {
        uVar2 = FUN_01f7feac(*unaff_x21,unaff_w20);
        lVar5 = *unaff_x21;
        if (lVar5 != 0) {
                    /* try { // try from 01f8e36c to 0208e39b has its CatchHandler @ 01f8e47c */
          uVar3 = FUN_01f7feac(lVar5,unaff_w19);
          FUN_01f89750(lVar5,uVar3,unaff_w20);
          if (*unaff_x21 != 0) {
            FUN_01f89750(*unaff_x21,uVar2,unaff_w19);
                    /* try { // try from 01f8e39c to 0208e42b has its CatchHandler @ 01f8dec4 */
            if (unaff_x21[1] == 0) {
              return;
            }
            uVar2 = FUN_01f7feac(unaff_x21[1],unaff_w20);
            lVar5 = unaff_x21[1];
            if (lVar5 != 0) {
              uVar3 = FUN_01f7feac(lVar5,unaff_w19);
              FUN_01f89750(lVar5,uVar3,unaff_w20);
              if (unaff_x21[1] != 0) {
                FUN_01f89750(unaff_x21[1],uVar2,unaff_w19);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


