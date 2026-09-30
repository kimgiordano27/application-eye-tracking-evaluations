/*
FUNCTION_NAME: FUN_05e59e98
ENTRY_POINT: 05e59e98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_05e59e98(long param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 local_68;
  
  if ((DAT_066dc615 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_127__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_128__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_13__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    DAT_066dc615 = 1;
  }
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_13__;
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__810_127__;
  puVar5 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
  ;
  puVar4 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  puVar3 = PTR_DAT_06312d90;
  local_68 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if (*(short *)(param_2 + 0x10) != 0x15) {
      lVar12 = *(long *)(param_1 + 0x30);
      if (lVar12 == 0) {
LAB_05e5a258:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar17 = *(long *)(lVar12 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar17 == 0) goto LAB_05e5a258;
      uVar16 = *(uint *)(lVar12 + 0x18);
      if (uVar16 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar16 + 1;
        plVar18 = (long *)(lVar17 + (long)(int)uVar16 * 8 + 0x20);
        *plVar18 = param_2;
        thunk_FUN_02bb0e9c(plVar18,param_2);
      }
      else {
        FUN_037a6538(lVar12,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      uVar2 = *(ushort *)(param_2 + 0x10);
      uVar16 = (uint)uVar2;
      if (uVar2 < 10) {
        if (uVar16 == 5 || uVar2 < 5) {
          if (5 < uVar16) {
LAB_05e5a25c:
            thunk_FUN_02ba3594(PTR_DAT_06320888);
            uVar14 = thunk_FUN_02b79644();
            FUN_04d7db04(uVar14,0);
            uVar15 = thunk_FUN_02ba3594(Method_OVRPlugin_<>c_<_cctor>b__810_130__);
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar14,uVar15);
          }
          iVar9 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                            (param_2 + 0x18,*(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)puVar4);
          }
          uVar13 = FUN_05e799b4(0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)puVar3);
          }
          FUN_05c45700((long)iVar9 <= (long)(uVar13 & 0xffffffff),0);
          uVar10 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                             (param_2 + 0x18,*(undefined8 *)puVar5);
          uVar11 = FUN_03ac7100(param_2 + 0x28,*(undefined8 *)puVar7);
          FUN_05e5a300(param_1,uVar10,uVar11);
        }
        else if (1 < uVar16 - 6) {
          if (uVar16 == 8) {
            cVar1 = *(char *)(param_1 + 0x48);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05c45700(cVar1 == '\0',0);
            FUN_05c45700(*(int *)(param_1 + 0x10) == -1,0);
            if (DAT_066dc62c == '\0') {
              FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_126__);
              DAT_066dc62c = '\x01';
            }
            if (0 < *(int *)(param_1 + 0x38)) {
              lVar12 = *(long *)(param_1 + 0x18);
              if (lVar12 == 0) goto LAB_05e5a258;
              lVar17 = *(long *)(lVar12 + 0x10);
              uVar14 = *(undefined8 *)(param_1 + 0x38);
              lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_126__;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_05e5a258;
              uVar16 = *(uint *)(lVar12 + 0x18);
              if (uVar16 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar16 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar16 * 8 + 0x20) = uVar14;
              }
              else {
                FUN_038ac0c0(lVar12,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              *(undefined8 *)(param_1 + 0x38) = 0;
            }
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_05e5a258;
            iVar9 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
            *(int *)(param_1 + 0x10) = iVar9 + -1;
            thunk_FUN_02bb0e9c(param_1 + 0x18);
          }
          else {
            if (uVar16 != 9) goto LAB_05e5a25c;
            cVar1 = *(char *)(param_1 + 0x48);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05c45700(cVar1 == '\0',0);
            *(undefined1 *)(param_1 + 0x48) = 1;
          }
        }
      }
      else if (9 < uVar16 - 0xc) {
        if (uVar16 == 10) {
          cVar1 = *(char *)(param_1 + 0x48);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(cVar1 != '\0',0);
          *(undefined1 *)(param_1 + 0x48) = 0;
        }
        else {
          if (uVar2 != 0xb) goto LAB_05e5a25c;
          while( true ) {
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_05e5a258;
            uVar13 = FUN_03f0c894(*(long *)(param_1 + 0x40),&local_68,*(undefined8 *)puVar8);
            if ((uVar13 & 1) == 0) break;
            FUN_05e5a300(param_1,local_68 & 0xffffffff,local_68._4_4_);
          }
        }
      }
    }
    if (*(long *)(param_2 + 0x70) != 0) {
      FUN_05e59e98(param_1);
    }
    param_2 = *(long *)(param_2 + 0x68);
  } while( true );
}


