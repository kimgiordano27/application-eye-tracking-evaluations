/*
FUNCTION_NAME: FUN_0381c428
ENTRY_POINT: 0381c428
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0381c85c) */

undefined1  [16] FUN_0381c428(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_03ff8408 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8408 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (DAT_03fed2da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
    DAT_03fed2da = '\x01';
  }
  puVar2 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  fVar8 = (float)param_1 -
          **(float **)
            (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8);
  fVar13 = (float)param_2 -
           (*(float **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8))
           [1];
  fVar13 = fVar13 * fVar13;
  uVar14 = (ulong)(uint)fVar13;
  if (fVar8 * fVar8 + fVar13 < DAT_00b55084) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    return ZEXT416(**(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8));
  }
  puVar5 = (undefined8 *)(param_3 + 0xa8);
  uVar6 = *puVar5;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_0381c8cc;
    lVar7 = *(long *)(*(long *)(param_3 + 0x30) + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar7 == 0) goto LAB_0381c8cc;
      lVar7 = *(long *)(lVar7 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(lVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar7 == 0) goto LAB_0381c8cc;
        uVar6 = FUN_0391c27c(lVar7,0);
        *puVar5 = uVar6;
        thunk_FUN_01b4f09c(puVar5,uVar6);
      }
    }
  }
  if (*(int *)(param_3 + 0xc0) == 1) {
    uVar6 = *(undefined8 *)(param_3 + 0xb0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0xb0);
UnityEngine_Component__GetComponentsInParent:
      FUN_037f360c(&uStack_d0,uVar6,0);
      uStack_9c = uStack_bc;
      uStack_b0 = uStack_d0;
      uVar14 = CONCAT44(uStack_c0,local_c4);
      *(ulong *)(param_3 + 0xd8) = CONCAT44(local_c4,uStack_c8);
      *(undefined8 *)(param_3 + 0xd0) = uStack_d0;
      *(undefined8 *)(param_3 + 0xe4) = uStack_bc;
      *(ulong *)(param_3 + 0xdc) = uVar14;
    }
  }
  else if (*(int *)(param_3 + 0xc0) == 0) {
    uVar6 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0xa8);
      goto UnityEngine_Component__GetComponentsInParent;
    }
  }
  if (*(int *)(param_3 + 0xc4) == 1) {
    uVar6 = *(undefined8 *)(param_3 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0xb8);
LAB_0381c6e0:
      FUN_037f360c(&uStack_d0,uVar6,0);
      uStack_9c = uStack_bc;
      uStack_b0 = uStack_d0;
      uVar14 = CONCAT44(uStack_c0,local_c4);
      *(ulong *)(param_3 + 0xf4) = CONCAT44(local_c4,uStack_c8);
      *(undefined8 *)(param_3 + 0xec) = uStack_d0;
      *(undefined8 *)(param_3 + 0x100) = uStack_bc;
      *(ulong *)(param_3 + 0xf8) = uVar14;
    }
  }
  else if (*(int *)(param_3 + 0xc4) == 0) {
    uVar6 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0xa8);
      goto LAB_0381c6e0;
    }
  }
  fVar8 = (float)uVar14;
  local_80 = *(undefined8 *)(param_3 + 0x88);
  uStack_88 = *(undefined8 *)(param_3 + 0x80);
  local_90 = *(undefined8 *)(param_3 + 0x78);
  lVar7 = FUN_034523e4(&local_90,0);
  if (lVar7 == 0) {
    fVar13 = fVar8;
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar9 = *pfVar4;
    fVar8 = pfVar4[1];
  }
  else {
    fVar9 = (float)FUN_01ee146c(lVar7,*(undefined8 *)
                                       Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                               );
    fVar13 = fVar8;
  }
  local_80 = *(undefined8 *)(param_3 + 0xa0);
  uStack_88 = *(undefined8 *)(param_3 + 0x98);
  local_90 = *(undefined8 *)(param_3 + 0x90);
  lVar7 = FUN_034523e4(&local_90,0);
  if (lVar7 == 0) {
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar10 = *pfVar4;
    fVar13 = pfVar4[1];
  }
  else {
    fVar10 = (float)FUN_01ee146c(lVar7,*(undefined8 *)
                                        Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                                );
  }
  fVar9 = fVar9 * fVar9 + fVar8 * fVar8;
  fVar10 = fVar9 + fVar10 * fVar10 + fVar13 * fVar13;
  fVar9 = fVar9 / fVar10;
  uVar6 = *(undefined8 *)(param_3 + 0xec);
  fVar8 = *(float *)(param_3 + 0xf4);
  uVar14 = (ulong)*(uint *)(param_3 + 0xfc);
  uVar15 = *(undefined4 *)(param_3 + 0x100);
  uVar16 = 0;
  uVar3 = (ulong)*(uint *)(param_3 + 0x104);
  fVar13 = *(float *)(param_3 + 0xd8);
  uVar18 = *(undefined8 *)(param_3 + 0xd0);
  if (fVar10 <= **(float **)
                  (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                  0xb8)) {
    fVar9 = 0.5;
  }
  uVar11 = FUN_039142e8(*(undefined4 *)(param_3 + 0xf8),uVar14,uVar15,uVar3,
                        *(undefined4 *)(param_3 + 0xdc),*(undefined4 *)(param_3 + 0xe0),
                        *(undefined4 *)(param_3 + 0xe4),*(undefined4 *)(param_3 + 0xe8),0);
  if (*(long *)(param_3 + 200) != 0) {
    fVar17 = (float)uVar6;
    fVar10 = (float)((ulong)uVar6 >> 0x20);
    fVar10 = fVar10 + ((float)((ulong)uVar18 >> 0x20) - fVar10) * fVar9;
    FUN_039297a8(CONCAT44(fVar10,fVar17 + ((float)uVar18 - fVar17) * fVar9),fVar10,
                 fVar8 + fVar9 * (fVar13 - fVar8),uVar11,uVar14,CONCAT44(uVar16,uVar15),uVar3,
                 *(long *)(param_3 + 200),0);
    auVar12 = FUN_0384dfb0(param_1,param_2,param_3,0);
    return auVar12;
  }
LAB_0381c8cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


