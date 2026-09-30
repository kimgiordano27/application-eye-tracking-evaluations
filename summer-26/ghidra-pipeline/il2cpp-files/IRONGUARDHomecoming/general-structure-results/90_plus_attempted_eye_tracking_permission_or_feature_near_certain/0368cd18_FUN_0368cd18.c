/*
FUNCTION_NAME: FUN_0368cd18
ENTRY_POINT: 0368cd18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_12;validity_or_gating_hits_11;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0368cd18(undefined8 param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_90;
  undefined8 local_88;
  
  if ((DAT_04833eaa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_30__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_31__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_32__);
    DAT_04833eaa = 1;
  }
  local_90 = 0;
  local_88 = 0;
  plVar8 = (long *)FUN_0368c35c(param_1);
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__653_32__;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__653_31__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__653_30__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fVar11 = 3.4028235e+38;
  fVar13 = -3.4028235e+38;
  bVar1 = false;
  iVar16 = 0;
  bVar2 = true;
  fVar20 = fVar11;
  fVar19 = fVar13;
  do {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0368ce1c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_0368ce1c:
    iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    uVar3 = _DAT_00c91620;
    if (iVar7 <= iVar16) {
      if (bVar1) {
        if ((fVar11 < fVar13) || ((fVar20 < fVar19 && (!bVar2)))) {
          param_2[0] = 0.0;
          param_2[1] = 0.0;
          param_2[2] = 0.0;
          param_2[3] = 0.0;
          return 0;
        }
        fVar17 = fmodf(fVar13 + (fVar11 - fVar13) * 0.5,360.0);
        *param_2 = fVar17;
        param_2[1] = fVar11 - fVar13;
        fVar13 = -1.0;
        if (!bVar2) {
          fVar13 = fVar20;
        }
        fVar11 = 1.0;
        if (!bVar2) {
          fVar11 = fVar19;
        }
        param_2[2] = fVar11;
        param_2[3] = fVar13;
      }
      else {
        *(undefined8 *)(param_2 + 2) = _UNK_00c91628;
        *(undefined8 *)param_2 = uVar3;
      }
      return 1;
    }
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0368ce7c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_0368ce7c:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,iVar16,puVar9[1]);
    if (plVar10 != (long *)0x0) {
      lVar12 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackingEnabled;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
OVRPlugin__get_eyeTrackingEnabled:
      uVar14 = (*(code *)*puVar9)(plVar10,&local_90,puVar9[1]);
      if ((uVar14 & 1) != 0) {
        fVar18 = (float)local_90 - local_90._4_4_ * 0.5;
        fVar17 = (float)local_90 + local_90._4_4_ * 0.5;
        if (fVar13 <= fVar18) {
          fVar13 = fVar18;
        }
        if (fVar17 <= fVar11) {
          fVar11 = fVar17;
        }
        if ((float)local_88 <= local_88._4_4_) {
          if (fVar19 <= (float)local_88) {
            fVar19 = (float)local_88;
          }
          bVar2 = false;
          if (local_88._4_4_ <= fVar20) {
            fVar20 = local_88._4_4_;
          }
        }
        bVar1 = true;
      }
    }
    iVar16 = iVar16 + 1;
  } while( true );
}


