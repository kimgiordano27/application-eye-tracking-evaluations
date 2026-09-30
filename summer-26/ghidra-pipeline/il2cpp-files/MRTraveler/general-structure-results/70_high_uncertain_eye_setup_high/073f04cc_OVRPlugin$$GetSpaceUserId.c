/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUserId
ENTRY_POINT: 073f04cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUserId(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long *plVar6;
  long unaff_x23;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  float fStack0000000000000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  
  *(undefined1 *)(unaff_x23 + 0x8ba) = in_w8;
  fStack0000000000000038 = 0.0;
  _fStack0000000000000030 = 0;
  fStack0000000000000028 = 0.0;
  uStack0000000000000020 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (unaff_x22 != (long *)0x0) {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08eb5f58) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073f0544;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_073f0544:
    iVar1 = (*(code *)*puVar2)();
    if (0 < iVar1) {
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_073f06d0;
      FUN_073ef4e8();
      if (DAT_09410146 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_09410146 = '\x01';
      }
      lVar3 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fStack0000000000000030 = *(float *)(lVar3 + 0x48);
      fVar8 = *(float *)(lVar3 + 0x4c);
      uStack0000000000000020 = *(undefined8 *)(lVar3 + 0x48);
      fVar9 = *(float *)(lVar3 + 0x50);
      plVar6 = *(long **)(unaff_x19 + 0x20);
      fStack0000000000000028 = fVar9;
      fStack0000000000000038 = fVar9;
      fStack0000000000000034 = fVar8;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e783f0) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_073f060c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e783f0,0);
LAB_073f060c:
        uVar4 = (*(code *)*puVar2)(plVar6);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          fStack0000000000000030 = (float)FUN_085e987c();
          fStack0000000000000030 = -fStack0000000000000030;
          fVar8 = -fVar8;
          fVar9 = -fVar9;
          fStack0000000000000038 = fVar9;
          fStack0000000000000034 = fVar8;
          fVar7 = (float)FUN_085e987c();
          fStack0000000000000028 = -fVar9;
          uStack0000000000000020 = CONCAT44(-fVar8,-fVar7);
          if (unaff_w20 == 1) {
            fStack0000000000000030 = -fStack0000000000000030;
            fStack0000000000000034 = -fStack0000000000000034;
            fStack0000000000000038 = -fStack0000000000000038;
          }
        }
      }
      uVar4 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar4 = FUN_073ef71c();
        *(int *)(unaff_x19 + 0x10) = (int)uVar4;
      }
      FUN_073ef848(uVar4,*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000030,&stack0x00000020);
    }
    return;
  }
LAB_073f06d0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


