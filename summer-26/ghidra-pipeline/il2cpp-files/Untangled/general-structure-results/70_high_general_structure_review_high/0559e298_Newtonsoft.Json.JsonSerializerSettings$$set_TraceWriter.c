/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TraceWriter
ENTRY_POINT: 0559e298
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TraceWriter
               (undefined8 param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  if ((DAT_071c2921 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02598);
    FUN_02f07e70(PTR_DAT_06d4f470);
    DAT_071c2921 = 1;
  }
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    return;
  }
  uVar3 = FUN_05460528(param_3,0,0);
  puVar2 = PTR_DAT_06d02598;
  if (*(int *)(*(long *)PTR_DAT_06d02598 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02598);
  }
  uVar5 = FUN_05561fe8(uVar3,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_05460528(param_3,*(int *)(param_3 + 0x10) + -1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    uVar5 = FUN_05561fe8(uVar3,0);
    if ((uVar5 & 1) != 0) goto LAB_0559e360;
  }
  else {
LAB_0559e360:
    param_3 = FUN_05469b08(param_3,0,0);
    if (param_3 == 0) goto LAB_0559e58c;
    if (*(int *)(param_3 + 0x10) == 0) {
      return;
    }
  }
  plVar6 = (long *)FUN_0559a2ac(param_1);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
    uVar3 = FUN_05460528(param_3,0,0);
    if ((plVar6 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x1b0)),
       param_2 != (long *)0x0)) {
      iVar10 = 0;
      uVar9 = (uVar4 & 0xffff) % 199;
      do {
        if (*(uint *)(param_2 + 3) <= uVar9) {
LAB_0559e590:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        plVar6 = param_2 + (long)(int)uVar9 + 4;
        lVar11 = *plVar6;
        if (lVar11 == 0) {
          lVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d4f470);
          FUN_0559fe34(lVar11,param_3,param_4,param_5,0);
          if ((lVar11 != 0) &&
             (lVar8 = thunk_FUN_02ef170c(lVar11,*(undefined8 *)(*param_2 + 0x40)), lVar8 == 0)) {
            uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar7,0);
          }
          if (uVar9 < *(uint *)(param_2 + 3)) {
            *plVar6 = lVar11;
            thunk_FUN_02f411dc(plVar6,lVar11);
            return;
          }
          goto LAB_0559e590;
        }
        lVar8 = *(long *)(lVar11 + 0x10);
        if (lVar8 == 0) break;
        iVar1 = *(int *)(lVar8 + 0x10);
        if ((iVar1 <= *(int *)(param_3 + 0x10)) &&
           (uVar5 = FUN_0559fa58(param_1,param_3,0,iVar1,lVar8,0,iVar1), (uVar5 & 1) != 0)) {
          if (*(long *)(lVar11 + 0x10) != 0) {
            if (*(int *)(*(long *)(lVar11 + 0x10) + 0x10) < *(int *)(param_3 + 0x10)) {
              FUN_0559f88c(param_1,param_2,param_3,uVar4,param_4,param_5,iVar10,uVar9);
              return;
            }
            uVar4 = *(uint *)(lVar11 + 0x18);
            if (((param_4 & 0xff) == 0) || ((uVar4 & 0xff) != 0)) {
              if ((param_4 & 0xff00) == 0) {
                return;
              }
              if ((uVar4 & 0xff00) != 0) {
                return;
              }
            }
            *(uint *)(lVar11 + 0x18) = uVar4 | param_4;
            if (param_5 == 0) {
              return;
            }
            *(int *)(lVar11 + 0x1c) = param_5;
            return;
          }
          break;
        }
        uVar9 = uVar9 + (uVar4 & 0xffff) % 0xc5 + 1;
        iVar10 = iVar10 + 1;
        if (0xc6 < (int)uVar9) {
          uVar9 = uVar9 - 199;
        }
        if (iVar10 == 199) {
          return;
        }
      } while( true );
    }
  }
LAB_0559e58c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


