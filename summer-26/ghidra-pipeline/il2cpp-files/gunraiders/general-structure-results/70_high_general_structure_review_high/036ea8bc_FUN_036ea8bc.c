/*
FUNCTION_NAME: FUN_036ea8bc
ENTRY_POINT: 036ea8bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036ea8bc(long param_1,long param_2,long param_3,ulong param_4,long param_5,uint param_6)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  long local_70;
  int local_64;
  
  if ((DAT_04538851 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_01c5d288(PTR_DAT_0422fb88);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(PTR_DAT_042341b8);
    FUN_01c5d288(Method_System_Linq_Enumerable_Where<CoinAmount_Sku>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<Edge>__);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
                );
    FUN_01c5d288(Method_System_Linq_Enumerable_Where<Collider>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Where<KeyValuePair<string,_JSONNode>>__);
    DAT_04538851 = 1;
  }
  local_64 = 0;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (param_2 == 0) {
      return;
    }
    uVar8 = FUN_036eeff4(param_1,param_2);
    if (param_3 == 0) goto LAB_036eaa68;
  }
  else {
    if (param_3 == 0) goto LAB_036eaa68;
    if (param_2 == 0) {
      return;
    }
    if (*(long *)(param_3 + 0xf8) != 0) {
      return;
    }
    uVar8 = FUN_036eeff4(param_1,param_2);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar9 = FUN_03146988(*(undefined8 *)(param_3 + 0x90),
                         *(undefined8 *)Method_System_Linq_Enumerable_Where<Collider>__,0);
    lVar15 = *(long *)(param_3 + 0x40);
    if (lVar15 != 0) {
      iVar16 = 0;
      do {
        lVar15 = FUN_036a3244(lVar15,uVar9,0);
        if (lVar15 == 0) goto LAB_036eaa84;
        local_64 = iVar16;
        uVar10 = FUN_032cf308(&local_64,0);
        uVar9 = FUN_03146988(uVar9,uVar10,0);
        lVar15 = *(long *)(param_3 + 0x40);
        iVar16 = iVar16 + 1;
      } while (lVar15 != 0);
    }
    goto LAB_036eaa68;
  }
  uVar9 = FUN_03146988(*(undefined8 *)(param_3 + 0x90),
                       *(undefined8 *)Method_System_Linq_Enumerable_Where<CoinAmount_Sku>__,0);
LAB_036eaa84:
  if ((param_4 & 1) == 0) {
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_036eaa68;
    uVar11 = FUN_036a6a14(*(long *)(param_3 + 0x40),uVar9,1,0);
    if ((uVar11 & 1) == 0) goto LAB_036eaac4;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_036eaa68;
    lVar15 = FUN_036a3244(*(long *)(param_3 + 0x40),uVar9,0);
    bVar2 = false;
  }
  else {
LAB_036eaac4:
    lVar15 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_036803cc(lVar15,uVar9,uVar8,0,3,0);
    bVar2 = true;
  }
  puVar3 = PTR_DAT_042305b0;
  if (*(int *)(*(long *)
                Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__ +
              0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_036e1324(lVar15,param_5);
  FUN_036e1c18(param_1,lVar15,param_5);
  FUN_036e1888(lVar15,param_5);
  local_64 = -1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar8 = FUN_03295560(0);
  uVar8 = FUN_032cf44c(&local_64,uVar8,0);
  if (lVar15 != 0) {
    FUN_036810a4(lVar15,param_6 & 1,0);
    puVar6 = Method_System_Linq_Enumerable_Where<KeyValuePair<string,_JSONNode>>__;
    puVar5 = Method_System_Linq_Enumerable_ToList<Edge>__;
    puVar4 = Method_System_Security_Cryptography_DSA_FromXmlString__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
    ;
    if ((param_5 == 0) || (uVar1 = *(uint *)(param_5 + 0x18), (int)uVar1 < 1)) {
      local_70 = 0;
    }
    else {
      local_70 = 0;
      lVar18 = 0;
      lVar14 = param_5 + 0x20;
      do {
        uVar17 = (uint)lVar18;
        if (uVar1 <= uVar17) {
LAB_036eaf78:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar12 = *(long **)(lVar14 + lVar18 * 8);
        if (plVar12 == (long *)0x0) goto LAB_036eaa68;
        uVar9 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
        uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)puVar6,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
          plVar12 = *(long **)(lVar14 + lVar18 * 8);
          if (plVar12 == (long *)0x0) goto LAB_036eaa68;
          uVar9 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
          uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
            plVar12 = *(long **)(lVar14 + lVar18 * 8);
            if (plVar12 == (long *)0x0) goto LAB_036eaa68;
            uVar9 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)PTR_DAT_042341b8,0);
            if ((uVar11 & 1) != 0) {
              FUN_036810a4(lVar15,0,0);
            }
          }
        }
        if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
        plVar12 = *(long **)(lVar14 + lVar18 * 8);
        if (plVar12 == (long *)0x0) goto LAB_036eaa68;
        uVar9 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
        uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)puVar5,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
          plVar12 = *(long **)(lVar14 + lVar18 * 8);
          if (plVar12 == (long *)0x0) goto LAB_036eaa68;
          uVar9 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
          uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
            plVar12 = *(long **)(lVar14 + lVar18 * 8);
            if (plVar12 == (long *)0x0) goto LAB_036eaa68;
            uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          }
        }
        if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
        plVar12 = *(long **)(lVar14 + lVar18 * 8);
        if (plVar12 == (long *)0x0) goto LAB_036eaa68;
        uVar9 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
        uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)puVar3,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
          plVar12 = *(long **)(lVar14 + lVar18 * 8);
          if (plVar12 == (long *)0x0) goto LAB_036eaa68;
          uVar9 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
          uVar11 = thunk_FUN_03152714(uVar9,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_036eaf78;
            plVar12 = *(long **)(lVar14 + lVar18 * 8);
            if (plVar12 == (long *)0x0) goto LAB_036eaa68;
            local_70 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          }
        }
        uVar1 = *(uint *)(param_5 + 0x18);
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < (int)uVar1);
    }
    puVar3 = PTR_DAT_0422fa10;
    uVar9 = *(undefined8 *)PTR_DAT_0422fb88;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    plVar12 = (long *)FUN_0324f628(uVar8,uVar9,0,0);
    if (plVar12 != (long *)0x0) {
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      piVar13 = (int *)thunk_FUN_01c49834();
      iVar16 = *piVar13;
      lVar14 = FUN_03683d14(lVar15,0);
      if (lVar14 != 0) {
        lVar14 = FUN_03683d14(lVar15,0);
        if (lVar14 == 0) goto LAB_036eaa68;
        if (*(int *)(lVar14 + 0x10) != 0) {
          plVar12 = *(long **)(param_1 + 0x30);
          if (plVar12 == (long *)0x0) goto LAB_036eaa68;
          (**(code **)(*plVar12 + 0x308))(plVar12,lVar15,*(undefined8 *)(*plVar12 + 0x310));
        }
      }
      *(long *)(lVar15 + 0xe0) = param_2;
      FUN_03680790(lVar15,0,0);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        uVar8 = FUN_03684aec(lVar15,0);
        uVar8 = FUN_036ed3c8(param_1,uVar8);
        FUN_03682f38(lVar15,uVar8,0);
      }
      if (bVar2) {
        if (*(char *)(param_1 + 0xa0) != '\0') {
          FUN_036810a4(lVar15,1,0);
        }
        if (-1 < iVar16) {
          plVar12 = *(long **)(param_3 + 0x40);
          if (plVar12 == (long *)0x0) goto LAB_036eaa68;
          iVar7 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          if (iVar16 < iVar7) {
            if (*(long *)(param_3 + 0x40) != 0) {
              FUN_036a4c68(*(long *)(param_3 + 0x40),iVar16,lVar15,0);
              goto LAB_036eaf34;
            }
            goto LAB_036eaa68;
          }
        }
        if (*(long *)(param_3 + 0x40) == 0) goto LAB_036eaa68;
        FUN_036a4c5c(*(long *)(param_3 + 0x40),lVar15,0);
      }
LAB_036eaf34:
      if (local_70 != 0) {
        uVar8 = FUN_036871c8(lVar15,local_70,0);
        FUN_03683558(lVar15,uVar8,0);
      }
      return;
    }
  }
LAB_036eaa68:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


