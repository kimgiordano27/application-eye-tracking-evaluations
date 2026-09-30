/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 01f8eb10
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_Posef__ToString(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w23;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x26;
  
  do {
    if (in_x9 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
                    /* try { // try from 01f8eb44 to 0208efeb has its CatchHandler @ 01f8eb44
                       catch() { ... } // from try @ 01f8eb44 with catch @ 01f8eb44
                       catch() { ... } // from try @ 01f8f294 with catch @ 01f8eb44
                       catch() { ... } // from try @ 01f8f3f4 with catch @ 01f8eb44
                       catch() { ... } // from try @ 01f8f418 with catch @ 01f8eb44
                       catch() { ... } // from try @ 01f8f430 with catch @ 01f8eb44
                       catch() { ... } // from try @ 01f8f4c8 with catch @ 01f8eb44
                       catch() { ... } // from try @ 01f8f524 with catch @ 01f8eb44 */
          puVar3 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01f8eb50;
        }
        in_x9 = in_x9 - 1;
        piVar6 = piVar6 + 4;
      } while (in_x9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0122ea3c(unaff_x24,param_3,0);
LAB_01f8eb50:
    iVar1 = (*(code *)*puVar3)(unaff_x24);
    if (-1 < iVar1) {
      if (unaff_w23 <= unaff_w19) {
        FUN_01f8e410();
        return unaff_w19;
      }
      FUN_01f8e410();
      do {
        if (*unaff_x20 == 0) goto LAB_01f8ebb0;
        plVar7 = (long *)unaff_x20[2];
        unaff_w19 = unaff_w19 + 1;
        uVar2 = FUN_01f7feac(*unaff_x20,unaff_w19);
        if (plVar7 == (long *)0x0) goto LAB_01f8ebb0;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_01f8eacc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0122ea3c(plVar7,*unaff_x26,0);
LAB_01f8eacc:
        iVar1 = (*(code *)*puVar3)(plVar7,uVar2);
      } while (iVar1 < 0);
    }
    if (*unaff_x20 == 0) {
LAB_01f8ebb0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    unaff_x24 = (long *)unaff_x20[2];
    unaff_w23 = unaff_w23 + -1;
    FUN_01f7feac(*unaff_x20,unaff_w23);
    if (unaff_x24 == (long *)0x0) goto LAB_01f8ebb0;
    param_1 = *unaff_x24;
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
}


