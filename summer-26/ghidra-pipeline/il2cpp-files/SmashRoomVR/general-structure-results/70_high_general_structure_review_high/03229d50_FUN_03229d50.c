/*
FUNCTION_NAME: FUN_03229d50
ENTRY_POINT: 03229d50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_03229d50(long param_1,long param_2,ulong param_3,long param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_03ff4687 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d83e98);
    thunk_FUN_01ad9084(StringLiteral_4088);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83ea8);
    thunk_FUN_01ad9084(PTR_DAT_03d83eb0);
    thunk_FUN_01ad9084(PTR_DAT_03d83ef0);
    thunk_FUN_01ad9084(PTR_DAT_03d83ef8);
    thunk_FUN_01ad9084(PTR_DAT_03d83eb8);
    thunk_FUN_01ad9084(PTR_DAT_03d83de0);
    thunk_FUN_01ad9084(PTR_DAT_03d83f00);
    thunk_FUN_01ad9084(StringLiteral_4068);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01ad9084(PTR_DAT_03d83dc8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d83f08);
    thunk_FUN_01ad9084(PTR_DAT_03d83f10);
    thunk_FUN_01ad9084(PTR_DAT_03d83ee0);
    thunk_FUN_01ad9084(PTR_DAT_03d83f18);
    thunk_FUN_01ad9084(PTR_DAT_03d83ee8);
    DAT_03ff4687 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar6 = FUN_02581004(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_03d83eb8);
    if (iVar6 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0322a378;
      FUN_025813fc(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_03d83eb0);
    }
    puVar5 = PTR_DAT_03d83ef0;
    puVar3 = StringLiteral_4068;
    puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_16__;
    if (param_2 != 0) {
      lVar11 = 0xa8;
      if ((param_3 & 1) == 0) {
        lVar11 = 0xa0;
      }
      plVar16 = *(long **)(param_2 + lVar11);
      if (plVar16 != (long *)0x0) {
        iVar6 = 0;
        puVar17 = (undefined8 *)PTR_DAT_03d83de0;
        do {
          lVar11 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03229f40;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar16,*(long *)puVar3,0);
LAB_03229f40:
          iVar7 = (*(code *)*puVar9)(plVar16,puVar9[1]);
          if (iVar7 <= iVar6) {
            return;
          }
          lVar12 = *plVar16;
          lVar11 = *(long *)puVar2;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03229fa0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar16,lVar11,0);
LAB_03229fa0:
          lVar11 = (*(code *)*puVar9)(plVar16,iVar6,puVar9[1]);
          if ((lVar11 == 0) || (param_4 == 0)) break;
          uVar14 = FUN_0257e748(param_4,*(undefined4 *)(lVar11 + 0x10),*(undefined8 *)puVar5);
          if ((uVar14 & 1) != 0) {
            uVar8 = FUN_0257e4c0(param_4,*(undefined4 *)(lVar11 + 0x10),*puVar17);
            lVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d83e98);
            FUN_03081994(lVar12,0);
            puVar9 = (undefined8 *)(lVar11 + 0x18);
            if (lVar12 == 0) break;
            *(undefined8 *)(lVar12 + 0x10) = *puVar9;
            thunk_FUN_01b4f09c();
            puVar4 = PTR_DAT_03d83dc8;
            lVar10 = *(long *)PTR_DAT_03d83dc8;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar10 = *(long *)puVar4;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
            if (lVar10 == 0) break;
            uVar14 = FUN_02581468(lVar10,*(undefined4 *)(lVar11 + 0x10),
                                  *(undefined8 *)PTR_DAT_03d83ef8);
            puVar4 = PTR_DAT_03d83dc8;
            if ((uVar14 & 1) == 0) {
              local_64 = *(undefined4 *)(lVar11 + 0x10);
              uVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_4088,&local_64);
              uVar18 = FUN_02ede300(*(undefined8 *)PTR_DAT_03d83f18,uVar18,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  );
              }
              FUN_038f2e04(uVar18,0);
            }
            else {
              lVar10 = *(long *)PTR_DAT_03d83dc8;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar10 = *(long *)puVar4;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
              if ((lVar10 == 0) ||
                 (lVar10 = FUN_025811d4(lVar10,*(undefined4 *)(lVar11 + 0x10),
                                        *(undefined8 *)PTR_DAT_03d83f00), lVar10 == 0)) break;
              iVar7 = *(int *)(lVar10 + 0x14);
              if (*(int *)(lVar10 + 0x10) != *(int *)(lVar11 + 0x10)) {
                lVar10 = FUN_0322a384(plVar16);
                if (lVar10 == 0) break;
                puVar9 = (undefined8 *)(lVar10 + 0x18);
              }
              puVar17 = (undefined8 *)(lVar12 + 0x30);
              *puVar17 = *puVar9;
              thunk_FUN_01b4f09c(puVar17);
              if (iVar7 != -1) {
                lVar10 = FUN_0322a384(plVar16,iVar7);
                if (lVar10 == 0) break;
                puVar17 = (undefined8 *)(lVar10 + 0x18);
              }
              puVar9 = (undefined8 *)(lVar12 + 0x38);
              *puVar9 = *puVar17;
              thunk_FUN_01b4f09c(puVar9);
              lVar13 = *plVar16;
              sVar1 = *(short *)(lVar11 + 0x14);
              lVar10 = *(long *)puVar2;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar10) {
                    puVar17 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0322a1cc;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar17 = (undefined8 *)FUN_01ae9f78(plVar16,lVar10,0);
LAB_0322a1cc:
              lVar10 = (*(code *)*puVar17)(plVar16,(int)sVar1,puVar17[1]);
              if (lVar10 == 0) break;
              *(undefined8 *)(lVar12 + 0x68) = *(undefined8 *)(lVar10 + 0x18);
              thunk_FUN_01b4f09c((undefined8 *)(lVar12 + 0x68));
              uVar18 = *(undefined8 *)(lVar12 + 0x30);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar14 = FUN_03922f24(uVar18,0,0);
              if ((uVar14 & 1) != 0) {
                local_68 = *(undefined4 *)(lVar11 + 0x10);
                uVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_4088,&local_68);
                uVar18 = FUN_02ede300(*(undefined8 *)PTR_DAT_03d83ee8,uVar18,0);
                if (*(int *)(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)
                                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                    );
                }
                FUN_038f336c(uVar18,0);
              }
              uVar18 = *puVar9;
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar14 = FUN_03922f24(uVar18,0,0);
              puVar17 = (undefined8 *)PTR_DAT_03d83de0;
              if ((uVar14 & 1) != 0) {
                local_6c = *(undefined4 *)(lVar11 + 0x10);
                uVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_4088,&local_6c);
                uVar18 = FUN_02ede300(*(undefined8 *)PTR_DAT_03d83ee0,uVar18,0);
                if (*(int *)(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)
                                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                    );
                }
                FUN_038f336c(uVar18,0);
              }
              if (*(long *)(param_1 + 0x10) == 0) break;
              FUN_02581274(*(long *)(param_1 + 0x10),uVar8,lVar12,*(undefined8 *)PTR_DAT_03d83ea8);
            }
          }
          iVar6 = iVar6 + 1;
        } while( true );
      }
    }
  }
LAB_0322a378:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


