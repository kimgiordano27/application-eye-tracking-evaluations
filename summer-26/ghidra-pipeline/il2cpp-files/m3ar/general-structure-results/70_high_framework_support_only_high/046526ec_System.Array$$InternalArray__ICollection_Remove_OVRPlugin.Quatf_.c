/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Quatf>
ENTRY_POINT: 046526ec
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04652a10) */

void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Quatf>(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08f85678);
    FUN_0403162c(PTR_DAT_08f65880);
    FUN_0403162c(PTR_DAT_08f8a198);
    FUN_0403162c(PTR_DAT_08f8a190);
    FUN_0403162c(PTR_DAT_08f8a188);
    *(undefined1 *)(unaff_x23 + 0xbcf) = 1;
  }
  lVar5 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_057d4bb0(lVar5,*unaff_x19);
  puVar3 = PTR_DAT_08f85678;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = thunk_FUN_0406ddbc();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
  lVar6 = *(long *)puVar3;
  plVar7 = (long *)thunk_FUN_0406ddbc();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
  lVar10 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar6) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_046527dc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_0406ae20(plVar7,lVar6,0);
LAB_046527dc:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar4 = PTR_DAT_08f8a198;
  puVar3 = PTR_DAT_08f65880;
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar10 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04652860;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar7,lVar6,0);
LAB_04652860:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar2 = PTR_DAT_08f65868;
    if ((uVar11 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_0406ddbc(plVar7,*(undefined8 *)PTR_DAT_08f65868);
      if (plVar7 == (long *)0x0) goto LAB_046529cc;
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 == 0) goto LAB_046529a4;
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar10 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_046528c8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar7,lVar6,1);
LAB_046528c8:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
    uVar9 = FUN_04608288();
    if (lVar5 == 0) {
LAB_046529ec:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar10 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_046529ec;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
    }
    else {
      FUN_057d53ac(lVar5,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_046529c0;
    }
  }
LAB_046529a4:
  puVar8 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar2,0);
LAB_046529c0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_046529cc:
  FUN_0464ed5c(lVar5);
  return;
}


