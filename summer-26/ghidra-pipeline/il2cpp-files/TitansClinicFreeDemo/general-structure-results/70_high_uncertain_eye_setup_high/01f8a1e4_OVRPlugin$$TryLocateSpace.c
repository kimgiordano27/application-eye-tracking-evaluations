/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 01f8a1e4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__TryLocateSpace(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  
  thunk_FUN_01279b34(PTR_DAT_027b3f80);
  *(undefined1 *)(unaff_x22 + 0xec2) = 1;
  if (unaff_x20 == (long *)0x0) {
    return 1;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b3f80))
  {
    iVar3 = FUN_01f7fe4c();
    iVar4 = FUN_01f7fe4c();
    if (iVar3 == iVar4) {
      iVar3 = FUN_01f7fe4c();
      puVar2 = PTR_DAT_027b5ad8;
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = 0;
      do {
        FUN_01f7feac();
        FUN_01f7feac();
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        lVar10 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01f8a2d8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_0122ea3c();
LAB_01f8a2d8:
        iVar4 = (*(code *)*puVar6)();
        iVar5 = FUN_01f7fe4c();
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar3 = iVar3 + 1;
        if (iVar5 <= iVar3) {
          return 0;
        }
      } while( true );
    }
  }
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar7 = thunk_FUN_0124bba8();
  uVar8 = thunk_FUN_01279b34(PTR_DAT_027c18c8);
  uVar9 = thunk_FUN_01279b34(PTR_DAT_027b5270);
  FUN_01e7598c(uVar7,uVar8,uVar9,0);
  uVar8 = thunk_FUN_01279b34(PTR_DAT_027c18d0);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar7,uVar8);
}


