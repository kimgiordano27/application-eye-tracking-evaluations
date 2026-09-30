/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.TilingJob$$ViewToTileSpaceOrthographic
ENTRY_POINT: 066959d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_10;telemetry_or_network_hits_7
*/


void UnityEngine_Rendering_Universal_TilingJob__ViewToTileSpaceOrthographic
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long extraout_x1;
  int iVar14;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  int iStack0000000000000014;
  uint in_stack_00000018;
  undefined4 uStack000000000000001c;
  
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__;
  puVar2 = PTR_DAT_0727cc98;
  puVar1 = PTR_DAT_07279558;
  if ((DAT_076e0116 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727cae8);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
                    /* try { // try from 06695a34 to 06795a3f has its CatchHandler @ 06695eb4 */
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                      );
                    /* try { // try from 06695a40 to 06795a5f has its CatchHandler @ 06694d04 */
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_07279598);
                    /* try { // try from 06695a60 to 06795a6f has its CatchHandler @ 06695ec4 */
    thunk_FUN_032e1da0(PTR_DAT_0727cc98);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                      );
    DAT_076e0116 = 1;
  }
  puVar4 = PTR_DAT_0727cae8;
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  System_IO_Enumeration_FileSystemEntry__set_OriginalRootDirectory(lVar8,0);
  uStack000000000000001c = FUN_06bf1738(0);
  uVar9 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x0000001c);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar3);
  }
  uVar5 = FUN_06694dd0();
  in_stack_00000018 = CONCAT31(in_stack_00000018._1_3_,uVar5) & 0xffffff01;
  uVar10 = thunk_FUN_032a52d0(*(undefined8 *)puVar4,&stack0x00000018);
  if (lVar8 != 0) {
    FUN_057b97fc(lVar8,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                 ,uVar9,uVar10,0);
    FUN_057b842c(lVar8,0);
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue__
    ;
    puVar3 = PTR_DAT_07279598;
    puVar2 = PTR_DAT_07279560;
    lVar11 = *(long *)(param_5 + 0x10);
    if (lVar11 != 0) {
      iVar14 = 0;
      do {
        if (*(int *)(lVar11 + 0x18) <= iVar14) {
          if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bb23f0(lVar8,0);
          return;
        }
        FUN_040f32d4(lVar11,iVar14,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                    );
        if (extraout_x1 == 0) break;
        iVar6 = FUN_06695ef4(extraout_x1);
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            FUN_06695e18(extraout_x1,iVar6);
            uVar9 = param_3;
            uVar10 = param_4;
            plVar12 = (long *)FUN_032d5d3c(*(undefined8 *)puVar2,6);
            uStack000000000000001c = *(undefined4 *)(extraout_x1 + 0x24);
            lVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x0000001c);
            if (plVar12 == (long *)0x0) goto LAB_06695dbc;
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            {
LAB_06695e0c:
              uVar9 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar9,0);
            }
            if ((int)plVar12[3] == 0) {
LAB_06695e08:
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar12[4] = lVar11;
            thunk_FUN_0333a630(plVar12 + 4,lVar11);
            in_stack_00000018 = *(uint *)(extraout_x1 + 0x28);
            lVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000018);
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_06695e0c;
            if (*(uint *)(plVar12 + 3) < 2) goto LAB_06695e08;
            plVar12[5] = lVar11;
            thunk_FUN_0333a630(plVar12 + 5,lVar11);
            iStack0000000000000014 = iVar6;
            lVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_06695e0c;
            if (*(uint *)(plVar12 + 3) < 3) goto LAB_06695e08;
            plVar12[6] = lVar11;
            thunk_FUN_0333a630(plVar12 + 6,lVar11);
            uStack0000000000000010 = FUN_06695e88(extraout_x1,iVar6);
            lVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000010);
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_06695e0c;
            if (*(uint *)(plVar12 + 3) < 4) goto LAB_06695e08;
            plVar12[7] = lVar11;
            thunk_FUN_0333a630(plVar12 + 7,lVar11);
            uStack000000000000000c = (undefined4)param_3;
            lVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
            param_3 = uVar9;
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
               param_3 = uVar9, lVar13 == 0)) goto LAB_06695e0c;
            if (*(uint *)(plVar12 + 3) < 5) goto LAB_06695e08;
            plVar12[8] = lVar11;
            thunk_FUN_0333a630(plVar12 + 8,lVar11);
            uStack0000000000000008 = (undefined4)param_4;
            lVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,&stack0x00000008);
            param_4 = uVar10;
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
               param_4 = uVar10, lVar13 == 0)) goto LAB_06695e0c;
            if (*(uint *)(plVar12 + 3) < 6) goto LAB_06695e08;
            plVar12[9] = lVar11;
            thunk_FUN_0333a630(plVar12 + 9,lVar11);
            FUN_057b98b8(lVar8,*(undefined8 *)puVar4,plVar12,0);
            FUN_057b842c(lVar8,0);
            iVar6 = iVar6 + 1;
            iVar7 = FUN_06695ef4(extraout_x1);
          } while (iVar6 < iVar7);
        }
        lVar11 = *(long *)(param_5 + 0x10);
        iVar14 = iVar14 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_06695dbc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


