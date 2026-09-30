/*
FUNCTION_NAME: FUN_02113460
ENTRY_POINT: 02113460
PROGRAM: gunraiders-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_7;validity_or_gating_hits_11;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long FUN_02113460(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar2 = PTR_DAT_0422f9e8;
  if ((DAT_0452f70a & 1) == 0) {
    FUN_01c5d288(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_01c5d288(OVRPlugin_Fovf___TypeInfo);
    FUN_01c5d288(OVRPlugin_Quatf___TypeInfo);
    FUN_01c5d288(OVRPlugin_Rectf___TypeInfo);
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    DAT_0452f70a = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar2 = OVRPlugin_Fovf___TypeInfo;
  uVar5 = FUN_03d4dd60(param_2,0);
  if ((uVar5 & 1) != 0) {
    if ((param_2 == 0) ||
       (lVar6 = FUN_023635c0(param_2,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo), lVar6 == 0))
    goto LAB_021136ec;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      if (uVar5 != 0) {
        uVar13 = 0;
        do {
          plVar14 = (long *)(lVar6 + uVar13 * 8 + 0x20);
          plVar7 = (long *)thunk_FUN_01c495e4(*plVar14,*(undefined8 *)puVar2);
          if (plVar7 != (long *)0x0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
            lVar8 = *plVar14;
            if (lVar8 == 0) goto LAB_021136ec;
            uVar9 = FUN_03d45df0(lVar8,0);
            if ((uVar9 & 1) != 0) {
              lVar8 = *plVar7;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_021135c0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar10 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar2,0);
LAB_021135c0:
              lVar8 = (*(code *)*puVar10)(plVar7,param_1,puVar10[1]);
              if (lVar8 != 0) {
                return lVar8;
              }
            }
          }
          uVar13 = uVar13 + 1;
          if (uVar13 == uVar5) goto LAB_021135f0;
        } while (uVar13 < *(uint *)(lVar6 + 0x18));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
LAB_021135f0:
  puVar3 = PTR_DAT_042393a8;
  lVar6 = *(long *)PTR_DAT_042393a8;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar6 = *(long *)puVar3;
  }
  puVar4 = OVRPlugin_Rectf___TypeInfo;
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar12 = 0;
    while( true ) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if ((lVar6 == 0) ||
         (plVar7 = (long *)FUN_02d4fd88(lVar6,iVar12,*(undefined8 *)puVar4), plVar7 == (long *)0x0))
      break;
      lVar6 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_021136ac;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar2,0);
LAB_021136ac:
      lVar6 = (*(code *)*puVar10)(plVar7,param_1,puVar10[1]);
      if (lVar6 != 0) {
        return lVar6;
      }
      iVar12 = iVar12 + 1;
      if (iVar12 == iVar1) {
        return 0;
      }
      lVar6 = *(long *)puVar3;
    }
  }
LAB_021136ec:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


