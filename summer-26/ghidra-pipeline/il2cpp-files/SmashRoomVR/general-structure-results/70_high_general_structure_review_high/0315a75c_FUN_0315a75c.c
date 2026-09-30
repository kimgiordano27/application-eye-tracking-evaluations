/*
FUNCTION_NAME: FUN_0315a75c
ENTRY_POINT: 0315a75c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0315acd0) */
/* WARNING: Removing unreachable block (ram,0x0315ad50) */

void FUN_0315a75c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 local_74;
  
  if ((DAT_03ff2028 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80258);
    thunk_FUN_01ad9084(PTR_DAT_03d80260);
    thunk_FUN_01ad9084(StringLiteral_3426);
    thunk_FUN_01ad9084(PTR_DAT_03d80508);
    thunk_FUN_01ad9084(PTR_DAT_03d803b8);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d80248);
    thunk_FUN_01ad9084(PTR_DAT_03d80250);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_13316);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d80510);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d80518);
    DAT_03ff2028 = 1;
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar10 != 0)) &&
     (plVar16 = *(long **)(lVar10 + 0x10), plVar16 != (long *)0x0)) {
    lVar11 = *plVar16;
    lVar10 = *(long *)Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    local_90 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d80248) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0315a900;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)PTR_DAT_03d80248,0);
LAB_0315a900:
    plVar16 = (long *)(*(code *)*puVar5)(plVar16,puVar5[1]);
    puVar4 = PTR_DAT_03d80518;
    puVar3 = StringLiteral_13316;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0315a984;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)puVar2,0);
LAB_0315a984:
      uVar14 = (*(code *)*puVar5)(plVar16,puVar5[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar16 == (long *)0x0) goto LAB_0315acc4;
        lVar11 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_0315ac9c;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0315ac84;
      }
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03d80250) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0315a9e8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)PTR_DAT_03d80250,0);
LAB_0315a9e8:
      lVar11 = (*(code *)*puVar5)(plVar16,puVar5[1]);
      uVar21 = *(undefined8 *)(param_1 + 0x60);
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar6 = FUN_01f25880(uVar21,uVar7,
                           *(undefined8 *)
                            Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = FUN_01ed712c(lVar6,*(undefined8 *)PTR_DAT_03d80508);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar12 = *plVar18;
      lVar9 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0315aaa0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar18,lVar9,0);
LAB_0315aaa0:
      uVar14 = (*(code *)*puVar5)(plVar18,puVar5[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(uVar14,uVar14 & 0xffffffff);
      }
      FUN_03159a40(lVar6,uVar14 & 0xffffffff,lVar11,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30));
      lVar6 = FUN_0391c27c(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_039293f4(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                   *(undefined4 *)(param_1 + 0x84),lVar6,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(puVar1);
        DAT_03fed256 = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_03929060(*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar6,0);
      fVar19 = (float)((ulong)local_90 >> 0x20);
      FUN_039282dc(local_90,fVar19,fVar20,lVar6,0);
      uVar21 = *(undefined8 *)(param_1 + 0x70);
      fVar22 = *(float *)(param_1 + 0x78);
      uVar14 = FUN_02ee6cf0(lVar10,0);
      if ((uVar14 & 1) == 0) {
        lVar10 = FUN_02edd6e8(lVar10,*(undefined8 *)PTR_DAT_03d80510,0);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      local_74 = *(undefined4 *)(lVar11 + 0x10);
      uVar7 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_3426,&local_74);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *plVar18;
      uVar17 = *(undefined8 *)(lVar11 + 0x18);
      lVar11 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0315abf0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar18,lVar11,0);
LAB_0315abf0:
      local_78 = (*(code *)*puVar5)(plVar18,puVar5[1]);
      uVar8 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d803b8,&local_78);
      uVar7 = FUN_02ee7164(*(undefined8 *)puVar4,uVar7,uVar17,uVar8,0);
      lVar10 = FUN_02edd6e8(lVar10,uVar7,0);
      fVar20 = fVar20 + fVar22;
      local_90 = CONCAT44(fVar19 + (float)((ulong)uVar21 >> 0x20),(float)local_90 + (float)uVar21);
    } while( true );
  }
  goto LAB_0315ad48;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0315ac84:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0315acb8;
    }
  }
LAB_0315ac9c:
  puVar5 = (undefined8 *)
           FUN_01ae9f78(plVar16,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                        ,0);
LAB_0315acb8:
  (*(code *)*puVar5)(plVar16,puVar5[1]);
LAB_0315acc4:
  plVar16 = *(long **)(param_1 + 0x88);
  if (plVar16 != (long *)0x0) {
    lVar11 = *(long *)Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    if (lVar10 != 0) {
      lVar11 = lVar10;
    }
    (**(code **)(*plVar16 + 0x558))(plVar16,lVar11,*(undefined8 *)(*plVar16 + 0x560));
    return;
  }
LAB_0315ad48:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


