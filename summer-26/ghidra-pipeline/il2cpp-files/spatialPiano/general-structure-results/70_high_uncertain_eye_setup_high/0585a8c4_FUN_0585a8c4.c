/*
FUNCTION_NAME: FUN_0585a8c4
ENTRY_POINT: 0585a8c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


int FUN_0585a8c4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  
  if ((DAT_06bc1042 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9990);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_OpenXRLayerProvider_ILayerHandler>_Remove__
                );
    DAT_06bc1042 = 1;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    return *(int *)(param_1 + 0x1c);
  }
  lVar9 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<Type,_OpenXRLayerProvider_ILayerHandler>_Remove__;
  puVar3 = PTR_DAT_067c9990;
  puVar2 = PTR_DAT_067c9338;
  if (lVar9 != 0) {
    uVar14 = 0;
    do {
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar14) {
        return *(int *)(param_1 + 0x1c);
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
LAB_0585ac1c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar13 = (long)(int)uVar14;
      if (*(long *)(lVar9 + lVar13 * 8 + 0x20) == 0) break;
      FUN_0585a06c();
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0585ac1c;
      lVar10 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) break;
      if (*(char *)(*(long *)(lVar10 + 0x10) + 0x10) == '\0') {
        plVar8 = *(long **)(lVar10 + 0x18);
        if (plVar8 == (long *)0x0) break;
        lVar9 = *plVar8;
        bVar1 = *(byte *)(*(long *)(puVar2 + 0xa0) + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(puVar2 + 0xa0)))
        {
          iVar12 = *(int *)(param_1 + 0x1c);
          iVar5 = (**(code **)(lVar9 + 0x158))(plVar8,*(undefined8 *)(lVar9 + 0x160));
          *(int *)(param_1 + 0x1c) = iVar5 + iVar12;
        }
        else {
          lVar9 = thunk_FUN_02f45174(plVar8,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                                    );
          if (lVar9 == 0) {
            lVar9 = *(long *)(param_1 + 0x10);
            if (lVar9 == 0) break;
            iVar12 = 0;
            while( true ) {
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0585ac1c;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if ((lVar9 == 0) || (plVar8 = *(long **)(lVar9 + 0x18), plVar8 == (long *)0x0))
              goto LAB_0585abf8;
              bVar1 = *(byte *)(*(long *)(puVar2 + 0xa0) + 0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)(puVar2 + 0xa0))) goto LAB_0585ac20;
              iVar5 = Newtonsoft_Json_Linq_JArray__FromObject(plVar8,0);
              if (iVar5 <= iVar12) break;
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_0585abf8;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0585ac1c;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if ((lVar9 == 0) || (plVar8 = *(long **)(lVar9 + 0x18), plVar8 == (long *)0x0))
              goto LAB_0585abf8;
              bVar1 = *(byte *)(*(long *)(puVar2 + 0xa0) + 0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)(puVar2 + 0xa0))) goto LAB_0585ac20;
              iVar5 = *(int *)(param_1 + 0x1c);
              plVar8 = (long *)FUN_050edca4(plVar8,iVar12,0);
              if (plVar8 == (long *)0x0) goto LAB_0585abf8;
              iVar7 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
              lVar9 = *(long *)(param_1 + 0x10);
              iVar12 = iVar12 + 1;
              *(int *)(param_1 + 0x1c) = iVar7 + iVar5;
              if (lVar9 == 0) goto LAB_0585abf8;
            }
          }
          else if (0 < *(int *)(lVar9 + 0x18)) {
            iVar5 = *(int *)(param_1 + 0x1c);
            iVar12 = 0;
            do {
              plVar8 = (long *)FUN_050edca4(lVar9,iVar12,0);
              if (plVar8 == (long *)0x0) goto LAB_0585abf8;
              lVar13 = *(long *)puVar4;
              if (*plVar8 != lVar13) {
LAB_0585ac20:
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48();
              }
              plVar8 = (long *)(**(code **)(lVar13 + 0x198))(plVar8,*(undefined8 *)(lVar13 + 0x1a0))
              ;
              if (plVar8 == (long *)0x0) goto LAB_0585abf8;
              iVar6 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
              iVar7 = *(int *)(lVar9 + 0x18);
              iVar12 = iVar12 + 1;
              iVar5 = iVar6 + iVar5;
              *(int *)(param_1 + 0x1c) = iVar5;
            } while (iVar12 < iVar7);
          }
        }
      }
      else {
        uVar11 = 0;
        lVar10 = 0x20;
        while( true ) {
          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_0585ac1c;
          lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_0585abf8;
          if ((long)*(int *)(lVar9 + 0x30) <= (long)uVar11) break;
          if ((*(long *)(lVar9 + 0x10) == 0) ||
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x18), lVar9 == 0)) goto LAB_0585abf8;
          iVar12 = *(int *)(param_1 + 0x1c);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0585ac1c;
          lVar9 = lVar9 + lVar10;
          lVar10 = lVar10 + 0x10;
          uVar11 = uVar11 + 1;
          iVar5 = FUN_051302e4(lVar9,0);
          lVar9 = *(long *)(param_1 + 0x10);
          *(int *)(param_1 + 0x1c) = iVar5 + iVar12;
          if (lVar9 == 0) goto LAB_0585abf8;
        }
      }
      lVar9 = *(long *)(param_1 + 0x10);
      uVar14 = uVar14 + 1;
    } while (lVar9 != 0);
  }
LAB_0585abf8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


