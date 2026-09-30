/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.TriangulatePolygonDelegate$$Invoke
ENTRY_POINT: 04a702fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a7040c) */

uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_TriangulatePolygonDelegate__Invoke(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
  do {
    param_1 = FUN_02b76218(param_1);
    do {
      lVar2 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == param_1) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04a7034c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(unaff_x22,param_1,0);
LAB_04a7034c:
      (*(code *)*puVar1)(unaff_x22,puVar1[1]);
      uVar3 = FUN_04a6db90();
      if ((uVar3 & 1) == 0) {
LAB_04a70374:
        if (in_stack_00000018 == (long *)0x0) goto code_r0x04a703e4;
        lVar2 = *in_stack_00000018;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_04a703b8;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate___ctor;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04a702c4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x24,0);
LAB_04a702c4:
      unaff_w21 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if ((unaff_w21 & 1) == 0) goto LAB_04a70374;
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      param_1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      unaff_x22 = in_stack_00000018;
    } while ((*(ushort *)(param_1 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate___ctor:
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04a703d4;
    }
  }
LAB_04a703b8:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x23,0);
LAB_04a703d4:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
code_r0x04a703e4:
  return (unaff_w21 ^ 1) & 1;
}


