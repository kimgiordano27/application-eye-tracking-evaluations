/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 0710845c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  undefined *puVar1;
  int iVar2;
  int in_w8;
  long *unaff_x19;
  long lVar3;
  
  puVar1 = PTR_DAT_0920f0d8;
  if (in_w8 != 0x5c) {
    lVar3 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_0920f0d8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (lVar3 != 0) {
      iVar2 = FUN_06fd6fe0(lVar3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
      if (iVar2 == -1) goto LAB_07108584;
      if (*unaff_x19 != 0) {
        lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091a5d58,
                             *(undefined8 *)PTR_DAT_091b0df8,0);
        *unaff_x19 = lVar3;
        thunk_FUN_03d1023c();
        if (*unaff_x19 != 0) {
                    /* catch() { ... } // from try @ 07108510 with catch @ 071084f4
                       catch() { ... } // from try @ 07108540 with catch @ 071084f4
                       catch() { ... } // from try @ 0710857c with catch @ 071084f4 */
          lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091b0df0,
                               *(undefined8 *)PTR_DAT_091b0de8,0);
                    /* try { // try from 07108508 to 0720850f has its CatchHandler @ 07108524 */
          *unaff_x19 = lVar3;
                    /* try { // try from 07108510 to 0720853b has its CatchHandler @ 071084f4 */
          thunk_FUN_03d1023c();
          if (*unaff_x19 != 0) {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 07108508 with catch @ 07108524
                        */
            lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091a4b80,
                                 *(undefined8 *)PTR_DAT_0920fa78,0);
                    /* try { // try from 0710853c to 0720853f has its CatchHandler @ 0710856c */
                    /* try { // try from 07108540 to 0720856f has its CatchHandler @ 071084f4 */
            *unaff_x19 = lVar3;
            thunk_FUN_03d1023c();
            if (*unaff_x19 != 0) {
              lVar3 = FUN_06fd42e4(*unaff_x19,*(undefined8 *)PTR_DAT_091aa4b0,
                                   *(undefined8 *)PTR_DAT_0920fa80,0);
              *unaff_x19 = lVar3;
              thunk_FUN_03d1023c();
              goto LAB_07108584;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
LAB_07108584:
  lVar3 = *unaff_x19;
  if (*(int *)(*(long *)PTR_DAT_0920fa70 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = FUN_07108648(lVar3);
  *unaff_x19 = lVar3;
  thunk_FUN_03d1023c();
  return;
}


