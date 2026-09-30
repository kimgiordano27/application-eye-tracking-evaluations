/*
FUNCTION_NAME: FUN_03635fe0
ENTRY_POINT: 03635fe0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03635fe0(long param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  undefined4 local_64;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff72aa & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_UxmlTraits_Init__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a990);
    thunk_FUN_01ad9084(PTR_DAT_03d9a998);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a430);
    thunk_FUN_01ad9084(Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a9a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a9a8);
    DAT_03ff72aa = 1;
  }
  uVar8 = FUN_0362f0b0(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar9 = FUN_03922f24(uVar8,0,0);
  puVar3 = PTR_DAT_03d9a9a8;
  puVar2 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar9 & 1) == 0) {
    lVar10 = FUN_0362f0b0(param_1);
    if (lVar10 == 0) goto LAB_0363658c;
    iVar6 = FUN_03901b0c(lVar10,0);
    iVar5 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      iVar5 = *(int *)(*(long *)(param_1 + 0x58) + 0x18);
    }
    if (iVar6 == iVar5) goto LAB_03636188;
    uVar4 = FUN_0362ede8(param_1);
    lVar10 = FUN_0362f0b0(param_1);
    if (lVar10 == 0) goto LAB_0363658c;
    FUN_03904d9c(lVar10,0);
  }
  else {
    lVar10 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    FUN_03901184(lVar10,0);
    local_64 = FUN_03922ce0(param_1,0);
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar2,&local_64);
    uVar8 = FUN_02ede300(*(undefined8 *)puVar3,uVar8,0);
    if (lVar10 == 0) goto LAB_0363658c;
    FUN_0392316c(lVar10,uVar8,0);
    *(long *)(param_1 + 0xb0) = lVar10;
    thunk_FUN_01b4f09c((long *)(param_1 + 0xb0),lVar10);
LAB_03636188:
    uVar4 = 0;
  }
  lVar10 = FUN_0362f0b0(param_1);
  iVar5 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x58) + 0x18);
  }
  if (lVar10 != 0) {
    FUN_03901204(lVar10,0xffff < iVar5,0);
    lVar10 = FUN_0362f0b0(param_1);
    if (lVar10 != 0) {
      FUN_0390262c(lVar10,*(undefined8 *)(param_1 + 0x58),0);
      lVar10 = FUN_0362f0b0(param_1);
      puVar2 = PTR_DAT_03d9a430;
      if (lVar10 != 0) {
        FUN_039028dc(lVar10,0,0);
        if ((*(int *)(param_1 + 0x20) < 2) &&
           ((*(int *)(param_1 + 0x20) == 1 ||
            (FUN_036568d8(param_1,0), *(int *)(param_1 + 0x20) < 2)))) {
          if (*(int *)(*(long *)PTR_DAT_03d9a9a0 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_0365998c(param_1,0);
        }
        *(undefined4 *)(param_1 + 0x20) = 2;
        uVar8 = FUN_0362eedc(param_1);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        iVar5 = FUN_03623ac4(uVar8,0);
        lVar10 = FUN_03655f5c(*(undefined8 *)(param_1 + 0x28),iVar5,param_2,0);
        lVar11 = FUN_0362f0b0(param_1);
        if ((lVar10 != 0) && (lVar11 != 0)) {
          FUN_03901b48(lVar11,*(undefined4 *)(lVar10 + 0x18),0);
          lVar11 = FUN_0362f0b0(param_1);
          if (lVar11 != 0) {
            iVar6 = FUN_038fb9d8(lVar11,0);
            if (iVar6 == 0) {
LAB_03636560:
              FUN_036366a4(param_1,uVar4 & 1);
              return;
            }
            lVar11 = FUN_0362f0b0(param_1);
            puVar3 = PTR_DAT_03d9a990;
            if (lVar11 != 0) {
              iVar6 = 0;
              bVar1 = false;
              uVar15 = 0;
              do {
                iVar7 = FUN_038fb9d8(lVar11,0);
                if (iVar7 <= (int)uVar15) {
                  lVar10 = FUN_0362f0b0(param_1);
                  if (lVar10 == 0) break;
                  iVar6 = FUN_038fb9d8(lVar10,0);
                  if (iVar6 < iVar5) {
                    lVar10 = FUN_0362f0b0(param_1);
                    if (lVar10 == 0) break;
                    iVar6 = FUN_038fb9d8(lVar10,0);
                    lVar10 = *(long *)puVar2;
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(lVar10);
                      lVar10 = *(long *)puVar2;
                    }
                    lVar10 = **(long **)(lVar10 + 0xb8);
                    if (lVar10 == 0) break;
                    FUN_02b5b174(lVar10,*(int *)(lVar10 + 0x18) - (iVar5 - iVar6),iVar5 - iVar6,
                                 *(undefined8 *)PTR_DAT_03d9a998);
                  }
                  else if (!bVar1) goto LAB_03636560;
                  lVar10 = FUN_0362eedc(param_1);
                  lVar11 = *(long *)puVar2;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(lVar11);
                    lVar11 = *(long *)puVar2;
                  }
                  if ((**(long **)(lVar11 + 0xb8) != 0) &&
                     (uVar8 = FUN_02b5b460(**(long **)(lVar11 + 0xb8),
                                           *(undefined8 *)
                                            Field_<PrivateImplementationDetails>_543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
                                          ), lVar10 != 0)) {
                    thunk_FUN_038fe0f8(lVar10,uVar8,0);
                    goto LAB_03636560;
                  }
                  break;
                }
                uVar12 = *(uint *)(lVar10 + 0x18);
                if (uVar12 <= uVar15) {
LAB_03636590:
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                plVar16 = (long *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
                lVar11 = *plVar16;
                if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) break;
                if (*(long *)(*(long *)(lVar11 + 0x10) + 0x18) == 0) {
                  if (!bVar1) {
                    lVar11 = *(long *)puVar2;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar11 = *(long *)puVar2;
                    }
                    lVar11 = **(long **)(lVar11 + 0xb8);
                    if (lVar11 == 0) break;
                    iVar7 = *(int *)(lVar11 + 0x18);
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (0 < iVar7) {
                      FUN_03062488(*(undefined8 *)(lVar11 + 0x10),0,iVar7,0);
                    }
                    lVar11 = FUN_0362eedc(param_1);
                    if (lVar11 == 0) break;
                    FUN_038feb68(lVar11,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
                    uVar12 = *(uint *)(lVar10 + 0x18);
                  }
                  if (uVar12 <= uVar15) goto LAB_03636590;
                  if (*plVar16 == 0) break;
                  *(undefined4 *)(*plVar16 + 0x1c) = 0xffffffff;
                  lVar11 = *(long *)puVar2;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar11 = *(long *)puVar2;
                  }
                  if (**(long **)(lVar11 + 0xb8) == 0) break;
                  FUN_02b5b0dc(**(long **)(lVar11 + 0xb8),iVar6,*(undefined8 *)puVar3);
                  lVar11 = *(long *)(param_1 + 0x28);
                  if (lVar11 == 0) break;
                  iVar7 = *(int *)(lVar11 + 0x18);
                  if (0 < iVar7) {
                    iVar14 = 0;
                    do {
                      if (iVar7 == iVar14) goto LAB_03636590;
                      lVar13 = *(long *)(lVar11 + (long)iVar14 * 8 + 0x20);
                      if (lVar13 == 0) goto LAB_0363658c;
                      if (iVar6 < *(int *)(lVar13 + 0x48)) {
                        *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + -1;
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar7 != iVar14);
                  }
                  bVar1 = true;
                }
                else {
                  *(int *)(lVar11 + 0x1c) = iVar6;
                  lVar11 = FUN_0362f0b0(param_1);
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_03636590;
                  lVar13 = *plVar16;
                  if ((lVar13 == 0) || (lVar11 == 0)) break;
                  FUN_03904a68(lVar11,*(undefined8 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x18),
                               *(undefined4 *)(lVar13 + 0x1c),0,0);
                  iVar6 = iVar6 + 1;
                }
                uVar15 = uVar15 + 1;
                lVar11 = FUN_0362f0b0(param_1);
              } while (lVar11 != 0);
            }
          }
        }
      }
    }
  }
LAB_0363658c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


