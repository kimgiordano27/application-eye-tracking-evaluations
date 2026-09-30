/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 057593d4
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTrackingVisemesSupported(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    uVar6 = thunk_FUN_02ef1808(param_1);
    FUN_05b51290(uVar6,0);
    while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
      FUN_057591a0();
      FUN_05698e6c();
    }
joined_r0x057595bc:
    if (unaff_x22 == 0) {
LAB_057596d8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_05b9a92c();
    FUN_05698e6c();
    iVar2 = (**(code **)(*unaff_x21 + 0x238))();
    if (iVar2 != 4) {
      FUN_05b9af18();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_05b9d918();
        return;
      }
      goto LAB_057596d8;
    }
    plVar3 = (long *)(**(code **)(*unaff_x21 + 0x248))();
    if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar3);
    }
    FUN_05698e6c();
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_057596d8;
    lVar4 = FUN_05b8e528(*(long *)(unaff_x19 + 0x40),plVar3,0);
    if (lVar4 == 0) {
      uVar6 = FUN_057596e4();
      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59708);
      FUN_05b6aad0(lVar4,plVar3,uVar6,0);
      if ((*(long *)(unaff_x19 + 0x40) == 0) ||
         (FUN_05b9011c(*(long *)(unaff_x19 + 0x40),lVar4,0), lVar4 == 0)) goto LAB_057596d8;
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x38);
    uVar12 = *unaff_x29;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar12 = FUN_056109c0(uVar12,0);
    uVar5 = FUN_05619d34(uVar6,uVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar4 + 0x38) == 0) goto LAB_057596d8;
      uVar5 = FUN_0561b9b8(*(long *)(lVar4 + 0x38),0);
      if ((uVar5 & 1) != 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x38);
        uVar12 = *(undefined8 *)PTR_DAT_06d04070;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar12 = FUN_056109c0(uVar12,0);
        uVar5 = FUN_0561ab0c(uVar6,uVar12,0);
        if ((uVar5 & 1) != 0) {
          iVar2 = (**(code **)(*unaff_x21 + 0x238))();
          if (iVar2 == 2) {
            FUN_05698e6c();
          }
          plVar3 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03d00);
          FUN_03fd0468(plVar3,*(undefined8 *)PTR_DAT_06d03ce8);
          while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
            uVar6 = (**(code **)(*unaff_x21 + 0x248))();
            if (plVar3 == (long *)0x0) goto LAB_057596d8;
            lVar9 = plVar3[2];
            lVar10 = *unaff_x27;
            *(int *)((long)plVar3 + 0x1c) = *(int *)((long)plVar3 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_057596d8;
            uVar1 = *(uint *)(plVar3 + 3);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(plVar3 + 3) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_02f411dc();
            }
            else {
              FUN_03fd0c9c(plVar3,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            FUN_05698e6c();
          }
          plVar7 = *(long **)(lVar4 + 0x38);
          if ((plVar7 == (long *)0x0) ||
             (uVar6 = (**(code **)(*plVar7 + 0x428))(plVar7,*(undefined8 *)(*plVar7 + 0x430)),
             plVar3 == (long *)0x0)) goto LAB_057596d8;
          uVar6 = FUN_0562816c(uVar6,(int)plVar3[3],0);
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06d03d68) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05759680;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d03d68,0);
LAB_05759680:
          (*(code *)*puVar8)(plVar3,uVar6,0,puVar8[1]);
          goto joined_r0x057595bc;
        }
      }
      lVar4 = (**(code **)(*unaff_x21 + 0x248))();
      if (lVar4 == 0) goto LAB_05759594;
      if (unaff_x20 == 0) goto LAB_057596d8;
      lVar4 = FUN_0569200c();
      if (lVar4 == 0) {
LAB_05759594:
        if (*(int *)(*(long *)PTR_DAT_06d4d140 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
      }
      goto joined_r0x057595bc;
    }
    iVar2 = (**(code **)(*unaff_x21 + 0x238))();
    if (iVar2 == 2) {
      FUN_05698e6c();
    }
    param_1 = *(undefined8 *)PTR_DAT_06d596f0;
  } while( true );
}


