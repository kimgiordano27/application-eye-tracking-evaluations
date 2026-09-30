/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 01d94380
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * OVRPlugin__RequestSceneCapture(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  
  FUN_00fdc2e4(PTR_DAT_02354198);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x21 + 0x883) = 1;
  puVar4 = PTR_DAT_0234bc58;
  plVar10 = (long *)0x0;
  if (unaff_x20 != (long *)0x0) {
    lVar8 = *unaff_x20;
    bVar2 = *(byte *)(lVar8 + 0x130);
    bVar3 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
    if ((bVar2 < bVar3) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_02351e10)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_02352760 + 0x130);
      if ((bVar2 < bVar3) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_02352760)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_02354198 + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_02354198))
        {
          bVar3 = *(byte *)(*(long *)PTR_DAT_0234bc58 + 0x130);
          if ((bVar2 < bVar3) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0234bc58
             )) {
            plVar10 = (long *)0x0;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            plVar10 = (long *)FUN_01d9462c();
          }
        }
        else {
          plVar10 = (long *)FUN_01cd74ec();
        }
      }
      else {
        plVar10 = (long *)FUN_01cc7190();
      }
    }
    else {
      plVar10 = (long *)FUN_01cd505c();
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01d611c4();
  if ((plVar10 != (long *)0x0) && ((uVar5 & 1) != 0)) {
    uVar1 = *(uint *)(plVar10 + 3);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_01d9461c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if ((plVar10[lVar8 + 4] == 0) ||
           (FUN_01cd0fe8(plVar10[lVar8 + 4],0), unaff_x19 == (long *)0x0)) {
LAB_01d94618:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar5 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar5 & 1) != 0) {
          if ((int)plVar10[3] == 1) {
            return plVar10;
          }
          plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,1);
          if ((uint)lVar8 < *(uint *)(plVar10 + 3)) {
            if (plVar6 == (long *)0x0) goto LAB_01d94618;
            lVar8 = plVar10[lVar8 + 4];
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_0103ffe0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
              uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar7,0);
            }
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar8;
              thunk_FUN_0106e12c(plVar6 + 4,lVar8);
              return plVar6;
            }
          }
          goto LAB_01d9461c;
        }
        uVar1 = *(uint *)(plVar10 + 3);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    lVar9 = *(long *)PTR_DAT_02359970;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_0103c2a0(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244();
    }
    plVar10 = (long *)**(long **)(lVar8 + 0xb8);
  }
  return plVar10;
}


