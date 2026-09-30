/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSetBaseSpaceDelegate$$BeginInvoke
ENTRY_POINT: 04a6e78c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a6e930) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_04a6e7c0;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_02b7654c(unaff_x21,param_3,0);
LAB_04a6e7c0:
      uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000018;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_04a6e8ac;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate__Invoke;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar4 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04a6e844;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,lVar3,0);
LAB_04a6e844:
      (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      FUN_04a6fe0c();
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      param_1 = *in_stack_00000018;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x21 = in_stack_00000018;
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate__Invoke:
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04a6e8c8;
    }
  }
LAB_04a6e8ac:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x22,0);
LAB_04a6e8c8:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


