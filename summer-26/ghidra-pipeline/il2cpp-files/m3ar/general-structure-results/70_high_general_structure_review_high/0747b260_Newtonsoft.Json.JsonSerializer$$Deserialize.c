/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 0747b260
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Newtonsoft_Json_JsonSerializer__Deserialize
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  
  if ((DAT_09546aa6 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65700);
    FUN_0403162c(PTR_DAT_08f656c8);
    FUN_0403162c(PTR_DAT_08fa11a8);
    FUN_0403162c(PTR_DAT_08f65740);
    DAT_09546aa6 = 1;
  }
  if ((param_2 != 0) &&
     (lVar5 = FUN_0736b7b4(param_2,param_3,param_4,0), puVar3 = PTR_DAT_08fa11a8,
     puVar2 = PTR_DAT_08f65700, lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x10)) {
      iVar8 = 0;
      do {
        uVar4 = FUN_07363804(lVar5,iVar8,0);
        if (0x7f < uVar4) {
          if (*(int *)(*(long *)PTR_DAT_08f656c8 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar6 = FUN_07475db8(0);
          lVar5 = FUN_0736dc10(lVar5,uVar6,0);
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar5 + 0x10));
    }
    uVar6 = FUN_040316d0(*(undefined8 *)puVar2,4);
    FUN_0740c2a4(uVar6,*(undefined8 *)puVar3,0);
    if ((lVar5 != 0) && (lVar5 = FUN_0736c3e8(lVar5,uVar6,0), lVar5 != 0)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      if (0 < (int)uVar6) {
        iVar8 = 0;
        uVar9 = 0;
        do {
          if ((uint)uVar6 <= uVar9) {
LAB_0747b448:
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          plVar10 = (long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_0747b44c;
          uVar1 = uVar9 + 1;
          if ((*(int *)(lVar7 + 0x10) != 0) || (uVar1 != (uint)uVar6)) {
            if ((param_5 & 1) == 0) {
              lVar7 = Newtonsoft_Json_JsonSerializer__SerializeInternal(param_1,lVar7,iVar8);
            }
            else {
              lVar7 = FUN_0747b450();
            }
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
            if ((uint)uVar6 <= uVar9) goto LAB_0747b448;
            *plVar10 = lVar7;
          }
          if ((uint)uVar6 <= uVar9) goto LAB_0747b448;
          if (lVar7 == 0) goto LAB_0747b44c;
          iVar8 = *(int *)(lVar7 + 0x10) + iVar8;
          uVar9 = uVar1;
        } while ((int)uVar1 < (int)(uint)uVar6);
      }
      FUN_0736a6b8(*(undefined8 *)PTR_DAT_08f65740,lVar5,0);
      return;
    }
  }
LAB_0747b44c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


