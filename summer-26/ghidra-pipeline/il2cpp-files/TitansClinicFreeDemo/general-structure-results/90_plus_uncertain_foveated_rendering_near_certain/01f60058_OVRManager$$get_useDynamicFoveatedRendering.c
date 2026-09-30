/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 01f60058
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRManager__get_useDynamicFoveatedRendering(void)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_w8;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  int *unaff_x23;
  int iVar5;
  int iVar6;
  undefined4 uStack000000000000000c;
  int iStack000000000000001c;
  
  *(undefined1 *)(unaff_x19 + 0xcaf) = in_w8;
  puVar4 = PTR_DAT_027be7f0;
  puVar3 = PTR_DAT_027ba9b8;
  uStack000000000000000c = (undefined4)unaff_x21[2];
  if (unaff_w22 < 1) {
    iVar6 = 0;
    unaff_w22 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    iStack000000000000001c = unaff_w20;
    do {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if (DAT_0293dcd5 == '\0') {
        thunk_FUN_01279b34(puVar3);
        thunk_FUN_01279b34(puVar4);
        DAT_0293dcd5 = '\x01';
      }
      iVar1 = (int)unaff_x21[2] + 1;
      *(int *)(unaff_x21 + 2) = iVar1;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((DAT_0293dcb5 & 1) == 0) {
        thunk_FUN_01279b34(PTR_DAT_027b9de8);
        DAT_0293dcb5 = 1;
      }
      if ((int)*(uint *)(unaff_x21 + 1) <= iVar1) {
LAB_01f6017c:
        *(int *)(unaff_x21 + 2) = (int)unaff_x21[2] + -1;
        unaff_w20 = iStack000000000000001c;
        unaff_w22 = iVar5;
        break;
      }
      if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) {
LAB_01f601d8:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      uVar2 = *(ushort *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if (9 < uVar2 - 0x30) goto LAB_01f6017c;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) goto LAB_01f601d8;
      iVar5 = iVar5 + 1;
      iVar6 = (uint)*(ushort *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2) + iVar6 * 10 +
              -0x30;
      unaff_w20 = iStack000000000000001c;
    } while (unaff_w22 != iVar5);
  }
  *unaff_x23 = iVar6;
  if (unaff_w22 < unaff_w20) {
    *(undefined4 *)(unaff_x21 + 2) = uStack000000000000000c;
  }
  return unaff_w20 <= unaff_w22;
}


