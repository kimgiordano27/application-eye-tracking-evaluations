/*
FUNCTION_NAME: FUN_02ca2288
ENTRY_POINT: 02ca2288
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02ca2288(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 local_98 [2];
  undefined8 uStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_03a2825c & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380e510);
    FUN_017fc350(PTR_DAT_037f2d40);
    FUN_017fc350(PTR_DAT_0380e520);
    FUN_017fc350(PTR_DAT_0380e528);
    FUN_017fc350(PTR_DAT_0380e530);
    FUN_017fc350(PTR_DAT_0380e388);
    FUN_017fc350(PTR_DAT_0380e538);
    FUN_017fc350(PTR_DAT_0380e390);
    FUN_017fc350(PTR_DAT_0380e398);
    FUN_017fc350(PTR_DAT_0380e3a0);
    FUN_017fc350(PTR_DAT_0380e3a8);
    FUN_017fc350(PTR_DAT_0380e3b0);
    FUN_017fc350(PTR_DAT_0380e3b8);
    FUN_017fc350(PTR_DAT_0380e418);
    FUN_017fc350(PTR_DAT_037f2b10);
    FUN_017fc350(PTR_DAT_0380e540);
    FUN_017fc350(PTR_DAT_0380e548);
    FUN_017fc350(PTR_DAT_0380e550);
    FUN_017fc350(PTR_DAT_0380e558);
    FUN_017fc350(PTR_DAT_0380e560);
    FUN_017fc350(PTR_DAT_0380e568);
    FUN_017fc350(PTR_DAT_0380e570);
    DAT_03a2825c = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar5 = FUN_021aeed8(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0380e530);
    if (iVar5 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02ca2908;
      System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
                (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0380e528);
    }
    puVar2 = PTR_DAT_0380e520;
    puVar1 = PTR_DAT_037f2b10;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 != 0) {
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar13 = 0;
        uVar9 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          iVar5 = *(int *)(lVar11 + 0x20 + uVar13 * 4);
          if (iVar5 != 0x37) {
            if (param_2 == 0) goto LAB_02ca2908;
            uVar6 = FUN_033b19b8(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar1);
            }
            uVar9 = FUN_033ea488(uVar6,0,0);
            if ((uVar9 & 1) != 0) {
              uVar6 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e558,param_2,0);
              if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
              }
              FUN_033bdab0(uVar6,0);
            }
            uVar6 = FUN_033b19b8(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar1);
            }
            uVar9 = FUN_033e963c(uVar6,0,0);
            if ((uVar9 & 1) != 0) {
              lVar7 = FUN_033b19b8(param_2,0);
              if (lVar7 == 0) goto LAB_02ca2908;
              uVar9 = FUN_033b1a30(lVar7,0);
              if ((uVar9 & 1) == 0) {
                uVar6 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e560,param_2,0);
                uVar6 = FUN_02a43498(uVar6,*(undefined8 *)PTR_DAT_0380e570,0);
                if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
                }
                FUN_033bdab0(uVar6,0);
              }
            }
            uVar6 = FUN_033b16f8(param_2,iVar5,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)puVar1);
            }
            uVar9 = FUN_033ea488(uVar6,0,0);
            if ((uVar9 & 1) == 0) {
              lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380e510);
              FUN_02c108e4(lVar7,0);
              if (lVar7 == 0) goto LAB_02ca2908;
              *(undefined8 *)(lVar7 + 0x10) = uVar6;
              thunk_FUN_0188fd20((undefined8 *)(lVar7 + 0x10),uVar6);
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_02ca2908;
              FUN_021af148(*(long *)(param_1 + 0x10),iVar5,lVar7,*(undefined8 *)puVar2);
            }
          }
          uVar9 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar11 = FUN_021aeee8(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0380e390),
         puVar3 = PTR_DAT_0380e3b0, puVar2 = PTR_DAT_0380e3a0, lVar11 != 0)) {
        FUN_025fb728(local_98,lVar11,*(undefined8 *)PTR_DAT_0380e3b8);
        uStack_78 = uStack_90;
        local_70 = local_88;
        do {
          uVar9 = UnityEngine_UIElements_FieldMouseDragger<__Il2CppFullySharedGenericType>__ProcessDownEvent
                            (&local_80,*(undefined8 *)puVar2);
          uVar13 = local_70;
          if ((uVar9 & 1) == 0) {
            FUN_02350030(&local_80,*(undefined8 *)PTR_DAT_0380e398);
            return;
          }
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar4 = (undefined4)local_70;
          lVar11 = FUN_021af0a8(*(long *)(param_1 + 0x10),local_70 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_0380e388);
          if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar7 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0380e418) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02ca26e8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_0185dba8(param_3,*(long *)PTR_DAT_0380e418,0);
LAB_02ca26e8:
          lVar7 = (*(code *)*puVar8)(param_3,puVar8[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar7 = FUN_021af0a8(lVar7,uVar13 & 0xffffffff,*(undefined8 *)PTR_DAT_0380e538);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if (*(int *)(lVar7 + 0x10) == 0x37) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = *(undefined8 *)(lVar11 + 0x10);
          }
          else {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = FUN_033b16f8(param_2,*(int *)(lVar7 + 0x10),0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
          }
          puVar8 = (undefined8 *)(lVar11 + 0x30);
          *puVar8 = uVar6;
          thunk_FUN_0188fd20(puVar8);
          if (*(int *)(lVar7 + 0x14) == 0x37) {
            uVar6 = FUN_02ca34a0(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x10));
          }
          else {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = FUN_033b16f8(param_2,*(int *)(lVar7 + 0x14),0);
          }
          puVar12 = (undefined8 *)(lVar11 + 0x38);
          *puVar12 = uVar6;
          thunk_FUN_0188fd20(puVar12);
          if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar6 = FUN_033f2cf8(*(long *)(lVar11 + 0x10),0);
          *(undefined8 *)(lVar11 + 0x68) = uVar6;
          thunk_FUN_0188fd20();
          uVar6 = *puVar8;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar13 = FUN_033ea488(uVar6,0,0);
          if ((uVar13 & 1) != 0) {
            local_98[0] = uVar4;
            uVar6 = thunk_FUN_018617ec(*(undefined8 *)puVar3,local_98);
            uVar6 = FUN_02a50b00(*(undefined8 *)PTR_DAT_0380e568,uVar6,
                                 *(undefined8 *)(lVar11 + 0x10),0);
            if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bdab0(uVar6,0);
            *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
            thunk_FUN_0188fd20(puVar8);
          }
          uVar6 = *puVar12;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar13 = FUN_033ea488(uVar6,0,0);
          if ((uVar13 & 1) != 0) {
            local_98[0] = uVar4;
            uVar6 = thunk_FUN_018617ec(*(undefined8 *)puVar3,local_98);
            uVar6 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e550,uVar6,0);
            if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bdab0(uVar6,0);
          }
        } while( true );
      }
    }
  }
LAB_02ca2908:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


