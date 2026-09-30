/*
FUNCTION_NAME: FUN_0570341c
ENTRY_POINT: 0570341c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0570341c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  
  if ((DAT_06bc0692 & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                );
    DAT_06bc0692 = 1;
  }
  lVar11 = *(long *)(PTR_DAT_067c9338 + 0xa0);
  if (param_2 == (long *)0x0) {
    if (param_3 == (long *)0x0) goto LAB_057036a8;
    uVar12 = (ulong)*(byte *)(lVar11 + 0x130);
  }
  else {
    uVar12 = (ulong)*(byte *)(lVar11 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + uVar12 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    if (param_3 == (long *)0x0) {
      Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  if (((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar12) ||
     (*(long *)(*(long *)(*param_3 + 200) + uVar12 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_3);
  }
  if (param_2 != (long *)0x0) {
    iVar3 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
    iVar4 = Newtonsoft_Json_Linq_JArray__FromObject(param_3,0);
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__;
    if (iVar3 == iVar4) {
      lVar11 = thunk_FUN_02f45174(param_2,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                                 );
      if (lVar11 == 0) {
        iVar3 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            plVar6 = *(long **)(param_1 + 0x38);
            uVar9 = FUN_050edca4(param_2,iVar3,0);
            uVar10 = FUN_050edca4(param_3,iVar3,0);
            if (plVar6 == (long *)0x0) goto LAB_057036a8;
            iVar4 = (**(code **)(*plVar6 + 0x218))
                              (plVar6,uVar9,uVar10,*(undefined8 *)(*plVar6 + 0x220));
            if (iVar4 != 0) goto LAB_05703690;
            iVar3 = iVar3 + 1;
            iVar4 = Newtonsoft_Json_Linq_JArray__FromObject(param_2,0);
          } while (iVar3 < iVar4);
        }
      }
      else {
        lVar5 = thunk_FUN_02f45174(param_3,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar1) {
          lVar15 = 0;
          do {
            uVar14 = (uint)lVar15;
            if (uVar1 <= uVar14) {
LAB_057036ac:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            plVar6 = *(long **)(lVar11 + 0x20 + lVar15 * 8);
            if ((plVar6 == (long *)0x0) ||
               (lVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
               lVar5 == 0)) goto LAB_057036a8;
            if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_057036ac;
            plVar6 = *(long **)(lVar5 + 0x20 + lVar15 * 8);
            if (plVar6 == (long *)0x0) goto LAB_057036a8;
            lVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
            if (lVar7 != lVar8) goto LAB_05703690;
            if (lVar7 == 0) goto LAB_057036a8;
            if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_057036ac;
            plVar6 = *(long **)(lVar11 + 0x20 + lVar15 * 8);
            if (plVar6 == (long *)0x0) goto LAB_057036a8;
            plVar13 = *(long **)(lVar7 + 0x68);
            uVar9 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
            if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_057036ac;
            plVar6 = *(long **)(lVar5 + 0x20 + lVar15 * 8);
            if ((plVar6 == (long *)0x0) ||
               (uVar10 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0)),
               plVar13 == (long *)0x0)) goto LAB_057036a8;
            uVar12 = (**(code **)(*plVar13 + 0x2a8))
                               (plVar13,uVar9,uVar10,*(undefined8 *)(*plVar13 + 0x2b0));
            if ((uVar12 & 1) == 0) goto LAB_05703690;
            uVar1 = *(uint *)(lVar11 + 0x18);
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < (int)uVar1);
        }
      }
      uVar9 = 0;
    }
    else {
LAB_05703690:
      uVar9 = 0xffffffff;
    }
    return uVar9;
  }
LAB_057036a8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


