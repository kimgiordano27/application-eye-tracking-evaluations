/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceDiscoveryResult>>
ENTRY_POINT: 04fb9424
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceDiscoveryResult>>
               (long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  size_t unaff_x21;
  int unaff_w22;
  int iVar11;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x28;
  long unaff_x29;
  
  do {
    puVar9 = (undefined8 *)*unaff_x24;
    iVar11 = unaff_w22;
    do {
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(param_1,param_2,*(undefined8 *)(unaff_x29 + -0x48),unaff_x28,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>:
        bVar2 = false;
        goto LAB_04fb99d8;
      }
      FUN_07a89d94(unaff_x25,6,0);
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,6,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x50),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      FUN_07a89d94(unaff_x25,7,0);
      (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,7,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar3 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar3);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      unaff_w22 = iVar11 + -8;
      unaff_x25 = FUN_07a89d94(unaff_x25,8,0);
      if (iVar11 < 0x10) {
        if (3 < unaff_w22) {
          uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
          pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
          memcpy(unaff_x24,pvVar4,unaff_x21);
          lVar10 = *unaff_x26;
          lVar8 = *(long *)(lVar10 + 0x18);
          lVar7 = lVar8;
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04481fb8(lVar8);
            lVar10 = *unaff_x26;
            lVar7 = *(long *)(lVar10 + 0x18);
          }
          uVar5 = *(undefined8 *)(lVar10 + 0x28);
          puVar9 = unaff_x24;
          if (-1 < *(int *)(lVar7 + 0x28)) {
            puVar9 = (undefined8 *)*unaff_x24;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
          FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x58),uVar3,unaff_x29 + -0x18,
                       unaff_x29 + -0xc);
          uVar3 = *(undefined8 *)(unaff_x29 + -0x78);
          if (*(char *)(unaff_x29 + -0xc) != '\0') {
            FUN_07a89d94(unaff_x25,1,0);
            uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
            FUN_07a89d94(unaff_x25,1,0);
            pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
            memcpy(unaff_x24,pvVar4,unaff_x21);
            lVar10 = *unaff_x26;
            lVar8 = *(long *)(lVar10 + 0x18);
            lVar7 = lVar8;
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_04481fb8(lVar8);
              lVar10 = *unaff_x26;
              lVar7 = *(long *)(lVar10 + 0x18);
            }
            uVar6 = *(undefined8 *)(lVar10 + 0x28);
            puVar9 = unaff_x24;
            if (-1 < *(int *)(lVar7 + 0x28)) {
              puVar9 = (undefined8 *)*unaff_x24;
            }
            *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
            FUN_0444872c(lVar8,uVar6,*(undefined8 *)(unaff_x29 + -0x60),uVar5,unaff_x29 + -0x18,
                         unaff_x29 + -0xc);
            if (*(char *)(unaff_x29 + -0xc) != '\0') {
              FUN_07a89d94(unaff_x25,2,0);
              uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
              FUN_07a89d94(unaff_x25,2,0);
              pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
              memcpy(unaff_x24,pvVar4,unaff_x21);
              lVar10 = *unaff_x26;
              lVar8 = *(long *)(lVar10 + 0x18);
              lVar7 = lVar8;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_04481fb8(lVar8);
                lVar10 = *unaff_x26;
                lVar7 = *(long *)(lVar10 + 0x18);
              }
              uVar6 = *(undefined8 *)(lVar10 + 0x28);
              puVar9 = unaff_x24;
              if (-1 < *(int *)(lVar7 + 0x28)) {
                puVar9 = (undefined8 *)*unaff_x24;
              }
              *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
              FUN_0444872c(lVar8,uVar6,*(undefined8 *)(unaff_x29 + -0x68),uVar5,unaff_x29 + -0x18,
                           unaff_x29 + -0xc);
              if (*(char *)(unaff_x29 + -0xc) != '\0') {
                FUN_07a89d94(unaff_x25,3,0);
                uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
                FUN_07a89d94(unaff_x25,3,0);
                pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
                memcpy(unaff_x24,pvVar4,unaff_x21);
                lVar10 = *unaff_x26;
                lVar8 = *(long *)(lVar10 + 0x18);
                lVar7 = lVar8;
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_04481fb8(lVar8);
                  lVar10 = *unaff_x26;
                  lVar7 = *(long *)(lVar10 + 0x18);
                }
                uVar6 = *(undefined8 *)(lVar10 + 0x28);
                puVar9 = unaff_x24;
                if (-1 < *(int *)(lVar7 + 0x28)) {
                  puVar9 = (undefined8 *)*unaff_x24;
                }
                *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
                FUN_0444872c(lVar8,uVar6,uVar3,uVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
                if (*(char *)(unaff_x29 + -0xc) != '\0') {
                  unaff_x25 = FUN_07a89d94(unaff_x25,4,0);
                  unaff_w22 = iVar11 + -0xc;
                  goto 
                  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64>>
                  ;
                }
              }
            }
          }
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
        }

        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_64>>
        :
        if (unaff_w22 < 1) {
          bVar2 = true;
          goto LAB_04fb99d8;
        }
        iVar11 = unaff_w22 + 1;
        goto LAB_04fb9600;
      }
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x20),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      FUN_07a89d94(unaff_x25,1,0);
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,1,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x28),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      FUN_07a89d94(unaff_x25,2,0);
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,2,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x30),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      FUN_07a89d94(unaff_x25,3,0);
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,3,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x38),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      FUN_07a89d94(unaff_x25,4,0);
      uVar3 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,4,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_0444872c(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x40),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Bone>;
      FUN_07a89d94(unaff_x25,5,0);
      unaff_x28 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_07a89d94(unaff_x25,5,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar4,unaff_x21);
      lVar8 = *unaff_x26;
      param_1 = *(long *)(lVar8 + 0x18);
      lVar7 = param_1;
      if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
        param_1 = FUN_04481fb8(param_1);
        lVar8 = *unaff_x26;
        lVar7 = *(long *)(lVar8 + 0x18);
      }
      param_2 = *(undefined8 *)(lVar8 + 0x28);
      puVar9 = unaff_x24;
      iVar11 = unaff_w22;
    } while (*(int *)(lVar7 + 0x28) < 0);
  } while( true );
  while( true ) {
    unaff_x25 = FUN_07a89d94(unaff_x25,1,0);
    iVar11 = iVar11 + -1;
    if (iVar11 < 2) break;
LAB_04fb9600:
    (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar4,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_0444872c(lVar8,uVar3);
    cVar1 = *(char *)(unaff_x29 + -0xc);
    if (cVar1 == '\0') break;
  }
  bVar2 = cVar1 != '\0';
LAB_04fb99d8:
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


