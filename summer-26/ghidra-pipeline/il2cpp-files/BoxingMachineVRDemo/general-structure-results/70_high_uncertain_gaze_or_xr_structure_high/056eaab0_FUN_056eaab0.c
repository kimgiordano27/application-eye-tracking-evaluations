/*
FUNCTION_NAME: FUN_056eaab0
ENTRY_POINT: 056eaab0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;functionality_gaze_retrieval_or_extraction
*/


long FUN_056eaab0(long param_1,int param_2,int param_3,long param_4,uint *param_5,uint param_6,
                 uint param_7,uint param_8,ushort param_9)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  undefined1 local_140 [172];
  int local_94;
  long local_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  long local_68;
  undefined *puVar15;
  
  lVar18 = tpidr_el0;
  local_68 = *(long *)(lVar18 + 0x28);
  local_84 = param_6;
  local_80 = param_8;
  local_7c = param_7;
  if ((DAT_06b7fb7f & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e6d8);
    FUN_02d6084c(Unity_Properties_TypeConverter<uint,_long>_TypeInfo);
    DAT_06b7fb7f = 1;
  }
  puVar15 = Unity_VisualScripting_UnexpectedEnumValueException<GraphSource>_TypeInfo;
  if (param_3 - param_2 < 0xfff0) {
    memset(local_140,0,0xa0);
    if (param_1 != 0) {
      iVar10 = thunk_FUN_02d6cdcc(0);
      param_1 = param_1 + iVar10;
    }
    puVar8 = Unity_Properties_TypeConverter<uint,_long>_TypeInfo;
    if (param_2 < param_3) {
      local_78 = (uint)param_9;
      local_94 = param_2;
      local_90 = lVar18;
      local_74 = param_3;
      iVar10 = param_2;
      do {
        puVar1 = (ushort *)(param_1 + (long)param_2 * 2);
        uVar5 = *puVar1;
        if (0x7f < uVar5) {
          if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          local_6c = iVar10;
          iVar10 = FUN_050081d4(param_3 - param_2,0x27,0);
          if (iVar10 * 0x10000 < 0x10001) {
            uVar11 = 1;
            uVar17 = 1;
          }
          else {
            uVar17 = 1;
            do {
              uVar11 = uVar17;
              uVar17 = uVar11;
              if (*(ushort *)(param_1 + (long)(int)(uVar11 + param_2) * 2) < 0x80) break;
              uVar11 = uVar11 + 1;
              uVar17 = (uint)(short)uVar11;
            } while ((short)uVar11 < (short)iVar10);
          }
          local_70 = param_2 + -1;
          if (*(ushort *)(param_1 + (long)(int)(local_70 + uVar17) * 2) >> 10 == 0x36) {
            puVar15 = OVRPlugin_TrackingConfidence___TypeInfo;
            if (((uVar11 & 0xffff) == 1) || (param_3 - param_2 == uVar17)) goto LAB_056eaf68;
            uVar11 = uVar11 + 1;
          }
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          param_4 = FUN_056eafc4(param_1,param_4,param_2,uVar11 * 0xc,0x1e0,param_5,local_6c);
          plVar13 = (long *)FUN_04ea62a0(0);
          if (plVar13 == (long *)0x0) {
LAB_056eafac:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          iVar10 = (int)(short)uVar11;
          uVar11 = (**(code **)(*plVar13 + 0x278))
                             (plVar13,puVar1,iVar10,local_140,0xa0,*(undefined8 *)(*plVar13 + 0x280)
                             );
          puVar15 = OVRPlugin_TrackingConfidence___TypeInfo;
          if ((uVar11 & 0xffff) != 0) {
            if (0 < (int)(uVar11 * 0x10000)) {
              iVar19 = 0;
              do {
                uVar4 = local_140[iVar19];
                if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_056ea790(uVar4,param_4,param_5);
                iVar19 = (int)(short)((short)iVar19 + 1);
              } while (iVar19 < (short)uVar11);
            }
            iVar19 = local_70 + iVar10;
            iVar10 = param_2 + iVar10;
            param_3 = local_74;
            goto LAB_056eaed0;
          }
          goto LAB_056eaf68;
        }
        if (((local_78 & 0xffff) == 0x25) && (uVar5 == 0x25)) {
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          param_4 = FUN_056eafc4(param_1,param_4,param_2,3,0x78,param_5,iVar10);
          iVar10 = param_2 + 2;
          if (iVar10 < param_3) {
            uVar6 = *(undefined2 *)(param_1 + (long)(param_2 + 1) * 2);
            uVar7 = *(undefined2 *)(param_1 + (long)iVar10 * 2);
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            sVar9 = FUN_056ea174(uVar6,uVar7);
            if (sVar9 != -1) {
              uVar17 = *param_5;
              uVar11 = uVar17 + 1;
              *param_5 = uVar11;
              if (param_4 == 0) goto LAB_056eafac;
              uVar3 = *(uint *)(param_4 + 0x18);
              if (uVar3 <= uVar17) {
LAB_056eafb0:
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              uVar2 = uVar17 + 2;
              *(undefined2 *)(param_4 + (long)(int)uVar17 * 2 + 0x20) = 0x25;
              *param_5 = uVar2;
              if (uVar3 <= uVar11) goto LAB_056eafb0;
              *(undefined2 *)(param_4 + (long)(int)uVar11 * 2 + 0x20) =
                   *(undefined2 *)(param_1 + (long)(param_2 + 1) * 2);
              *param_5 = uVar17 + 3;
              if (uVar3 <= uVar2) goto LAB_056eafb0;
              *(undefined2 *)(param_4 + (long)(int)uVar2 * 2 + 0x20) =
                   *(undefined2 *)(param_1 + (long)iVar10 * 2);
              param_2 = iVar10;
              param_3 = local_74;
              goto LAB_056eaecc;
            }
          }
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_056ea790(0x25,param_4,param_5);
          param_3 = local_74;
LAB_056eaecc:
          iVar10 = param_2 + 1;
          iVar19 = param_2;
        }
        else {
          uVar11 = (uint)uVar5;
          if ((uVar11 == (local_7c & 0xffff)) || (uVar11 == (local_80 & 0xffff))) {
LAB_056eae88:
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            param_4 = FUN_056eafc4(param_1,param_4,param_2,3,0x78,param_5,iVar10);
            FUN_056ea790(uVar5,param_4,param_5);
            goto LAB_056eaecc;
          }
          iVar19 = param_2;
          if (uVar11 != (local_78 & 0xffff)) {
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if ((local_84 & 1) == 0) {
              uVar12 = FUN_056eb0f0(uVar11);
            }
            else {
              uVar12 = FUN_056eb1d0(uVar5);
            }
            if ((uVar12 & 1) == 0) goto LAB_056eae88;
          }
        }
LAB_056eaed0:
        param_2 = iVar19 + 1;
      } while (param_2 < param_3);
      lVar18 = local_90;
      if ((iVar10 != param_2) && ((iVar10 != local_94 || (param_4 != 0)))) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        param_4 = FUN_056eafc4(param_1,param_4,param_2,0,0,param_5,iVar10);
        lVar18 = local_90;
      }
    }
    if (*(long *)(lVar18 + 0x28) == local_68) {
      return param_4;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_056eaf68:
  uVar14 = thunk_FUN_02dc61f4(puVar15);
  uVar14 = FUN_04e6f6dc(uVar14,0);
  thunk_FUN_02dc61f4(PTR_DAT_06764588);
  uVar16 = thunk_FUN_02d9d534();
  FUN_056e8a9c(uVar16,uVar14);
  uVar14 = thunk_FUN_02dc61f4(OVRPlugin_Vector2f___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar16,uVar14);
}


