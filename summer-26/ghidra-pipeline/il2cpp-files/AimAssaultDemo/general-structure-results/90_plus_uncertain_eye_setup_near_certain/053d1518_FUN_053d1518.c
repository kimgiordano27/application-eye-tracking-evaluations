/*
FUNCTION_NAME: FUN_053d1518
ENTRY_POINT: 053d1518
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x053d19bc) */

void FUN_053d1518(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int local_44;
  
  if ((DAT_08257b4f & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d99048);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07d990f8);
    FUN_0373b518(PTR_DAT_07d99100);
    FUN_0373b518(PTR_DAT_07d990f0);
    FUN_0373b518(PTR_DAT_07d990e8);
    FUN_0373b518(PTR_DAT_07d99050);
    FUN_0373b518(PTR_DAT_07d90ac8);
    DAT_08257b4f = 1;
  }
  local_44 = 0;
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03775678(lVar12);
  }
  plVar7 = (long *)thunk_FUN_037787d0(param_1,lVar12);
  puVar2 = PTR_DAT_07d990f0;
  if (plVar7 == (long *)0x0) {
    if (param_1 == (long *)0x0) goto LAB_053d19b4;
    Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
              (param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
  }
  else {
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d990e8);
    FUN_049ce6c0(lVar12,*(undefined8 *)puVar2);
    if ((lVar12 == 0) ||
       (lVar8 = FUN_049cf11c(lVar12,*(undefined8 *)PTR_DAT_07d99100), param_1 == (long *)0x0))
    goto LAB_053d19b4;
    param_1[0x13] = lVar8;
    thunk_FUN_037aeb94();
    local_44 = 0;
    iVar5 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
    puVar2 = PTR_DAT_07d990f8;
    if (0 < iVar5) {
      do {
        iVar5 = local_44;
        uVar9 = FUN_06240534(&local_44,0);
        lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
        if (iVar5 == 0) {
          uVar9 = Newtonsoft_Json_Linq_Extensions_<Convert>d__14<object,_object>__System_IDisposable_Dispose
                            (param_1,uVar9,*(undefined8 *)(lVar8 + 0x18));
        }
        else {
          lVar8 = *(long *)(lVar8 + 8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03775678(lVar8);
          }
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_053d16f4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_0377596c(plVar7,lVar8,0);
LAB_053d16f4:
          uVar11 = (*(code *)*puVar10)(plVar7,puVar10[1]);
          uVar9 = FUN_0426dd6c(param_1,uVar9,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
        }
        lVar8 = *(long *)(lVar12 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_053d19b4;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        iVar5 = local_44 + 1;
        local_44 = iVar5;
        iVar6 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
      } while (iVar5 < iVar6);
    }
  }
  puVar2 = PTR_DAT_07d90ac8;
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar9 = thunk_FUN_037788cc();
  lVar12 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_044a4918(uVar9,param_1,*(undefined8 *)(lVar12 + 0x50),*(undefined8 *)(lVar12 + 0x60));
  lVar12 = FUN_0426e774(param_1,*(undefined8 *)puVar2,uVar9,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68));
  if (lVar12 != 0) {
    lVar12 = FUN_0732b39c(lVar12,0);
    param_1[0x14] = lVar12;
    thunk_FUN_037aeb94(param_1 + 0x14,lVar12);
    puVar2 = PTR_DAT_07d896f8;
    if (param_1[0x13] != 0) {
      plVar7 = (long *)FUN_051395a8(param_1[0x13],*(undefined8 *)PTR_DAT_07d99050);
      puVar4 = PTR_DAT_07d99048;
      puVar3 = PTR_DAT_07d89700;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_053d18b8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar3,0);
LAB_053d18b8:
        uVar14 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar14 & 1) == 0) goto LAB_053d1938;
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_053d1914;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar4,0);
LAB_053d1914:
        uVar9 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        thunk_FUN_07331220(param_1,uVar9,param_1[0x14],0);
      } while( true );
    }
  }
LAB_053d19b4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_053d1938:
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_053d198c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar2,0);
LAB_053d198c:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  return;
}


