/*
FUNCTION_NAME: Unity.VisualScripting.GraphReference$$ClearIntern
ENTRY_POINT: 067b1de4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_GraphReference__ClearIntern(long param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_x5;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long *unaff_x22;
  float fVar14;
  int iVar15;
  undefined1 in_stack_00000048;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x510));
  thunk_FUN_032e1da0(Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Add__);
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_SelectionButton>_get_Current__
                    );
  thunk_FUN_032e1da0(
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_set_arSessionOrigin__
                    );
  *(undefined1 *)(unaff_x20 + 0xa72) = 1;
  in_stack_00000048 = 0;
  lVar13 = unaff_x22[0x1b];
  if (lVar13 != 0) {
    uVar9 = FUN_06baec08(lVar13,0);
    if ((uVar9 & 1) == 0) {
      iVar15 = (int)unaff_x22[0x1e];
    }
    else {
      fVar14 = (float)FUN_06bbe920(0);
      lVar11 = unaff_x22[0x1e];
      if (DAT_076d3234 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07279c00);
        DAT_076d3234 = '\x01';
      }
      fVar14 = fVar14 * (float)(int)lVar11;
      if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      iVar15 = -0x80000000;
      if ((float)(int)fVar14 != INFINITY) {
        iVar15 = (int)fVar14;
      }
    }
    if (unaff_x19 != 0) {
      *(int *)(unaff_x19 + 0x24) = iVar15;
      uVar9 = FUN_06baec08(lVar13,0);
      if ((uVar9 & 1) == 0) {
        iVar15 = *(int *)((long)unaff_x22 + 0xf4);
      }
      else {
        fVar14 = (float)FUN_06bbe948(0);
        iVar15 = *(int *)((long)unaff_x22 + 0xf4);
        if (DAT_076d3234 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279c00);
          DAT_076d3234 = '\x01';
        }
        fVar14 = fVar14 * (float)iVar15;
        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        iVar15 = -0x80000000;
        if ((float)(int)fVar14 != INFINITY) {
          iVar15 = (int)fVar14;
        }
      }
      *(int *)(unaff_x19 + 0x28) = iVar15;
      if (*(int *)((long)unaff_x22 + 0x22c) == 0) {
        uVar8 = ~*(uint *)(unaff_x22 + 0x45) >> 0x1f;
      }
      else {
        uVar8 = 1;
      }
      if (unaff_x22[0x1b] != 0) {
        FUN_06baf744(&stack0x00000008,unaff_x22[0x1b],0);
        if (unaff_x22[0x1b] != 0) {
          FUN_06baeccc(unaff_x22[0x1b],0);
          puVar3 = Method_Unity_VisualScripting_GameObjectEventUnit<Joint2D>_Definition__;
          if (unaff_x22[0x1b] != 0) {
            uVar10 = FUN_06bae9bc(unaff_x22[0x1b],0);
            FUN_067b228c(uVar10,unaff_x19 + 0x78,unaff_x19 + 0x88,unaff_x22 + 0x47,uVar8,in_x5,0);
            lVar11 = *(long *)puVar3;
            lVar12 = *unaff_x22;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar11 = *(long *)puVar3;
            }
            uVar10 = FUN_066c3340(&stack0x00000048,lVar12,
                                  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60),0);
            FUN_067b4670(uVar10,lVar12,unaff_x22 + 0x45);
            puVar3 = PTR_DAT_07279a48;
            cVar1 = *(char *)((long)unaff_x22 + 0x249);
            cVar2 = *(char *)(unaff_x19 + 0x1a);
            if (*(int *)(*(long *)PTR_DAT_07279a48 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_066fc668(lVar12,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Add__
                         ,cVar2 != '\0',0);
            if (cVar1 == '\0') {
              bVar5 = false;
              bVar6 = false;
              bVar4 = false;
            }
            else {
              iVar15 = *(int *)(unaff_x19 + 0x1c);
              bVar4 = iVar15 == 1;
              if (bVar4) {
                iVar7 = FUN_06bbf804(0);
                iVar15 = *(int *)(unaff_x19 + 0x1c);
                bVar5 = iVar7 == 0;
              }
              else {
                bVar5 = false;
              }
              bVar6 = iVar15 == 2;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_066fc668(lVar12,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
                         ,bVar6 | bVar5,0);
            FUN_066fc668(lVar12,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                         ,bVar4,0);
            FUN_066fc668(lVar12,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_Dispose__
                         ,bVar6,0);
            if (*(char *)(unaff_x19 + 0x15) == '\0') {
              bVar4 = false;
            }
            else {
              bVar4 = (int)unaff_x22[0x30] == 1;
            }
            uVar10 = *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwistGesture>_set_arSessionOrigin__
            ;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_066fc668(lVar12,uVar10,bVar4,0);
            uVar9 = FUN_067b1548();
            uVar10 = *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_SelectionButton>_get_Current__
            ;
            if ((uVar9 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar8 = FUN_066fcc34(lVar13,0);
              uVar8 = ~uVar8 & 1;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_066fc668(lVar12,uVar10,uVar8,0);
            FUN_06785628(lVar12,*(undefined4 *)(unaff_x19 + 0x10),0);
            FUN_066c3344(&stack0x00000048,0);
            if (*(int *)(*(long *)PTR_DAT_07279a28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_06c106d4(&stack0x00000068,lVar12,0);
            if (lVar12 != 0) {
              FUN_06c0270c(lVar12,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


