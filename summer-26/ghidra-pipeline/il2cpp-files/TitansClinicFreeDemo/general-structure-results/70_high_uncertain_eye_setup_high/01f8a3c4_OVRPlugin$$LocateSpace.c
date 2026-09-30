/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 01f8a3c4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__LocateSpace(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01279b34(PTR_DAT_027b3f80);
  *(undefined1 *)(unaff_x22 + 0xec3) = 1;
  if (unaff_x21 != (long *)0x0) {
    if (unaff_x20 == unaff_x21) {
LAB_01f8a504:
      uVar5 = 1;
      goto LAB_01f8a508;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b3f80)
       ) {
      if (unaff_x21 == (long *)0x0) {
LAB_01f8a520:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      iVar3 = FUN_01f7fe4c(unaff_x21);
      iVar4 = FUN_01f7fe4c();
      if (iVar3 == iVar4) {
        iVar3 = FUN_01f7fe4c(unaff_x21);
        puVar2 = PTR_DAT_027b5ac0;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            FUN_01f7feac();
            FUN_01f7feac(unaff_x21,iVar3);
            if (unaff_x19 == (long *)0x0) goto LAB_01f8a520;
            lVar7 = *unaff_x19;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_01f8a4c8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0122ea3c();
LAB_01f8a4c8:
            uVar5 = (*(code *)*puVar6)();
            if ((uVar5 & 1) == 0) break;
            iVar3 = iVar3 + 1;
            iVar4 = FUN_01f7fe4c(unaff_x21);
          } while (iVar3 < iVar4);
          goto LAB_01f8a508;
        }
        goto LAB_01f8a504;
      }
    }
  }
  uVar5 = 0;
LAB_01f8a508:
  return uVar5 & 1;
}


